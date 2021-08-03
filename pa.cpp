class App_PolyDepthSorting: public BaseDemo
{
public:
  App_PolyDepthSorting(const vl::String& filename): mFileName(filename) {}

  void initEvent()
  {
    vl::Log::notify(appletInfo());

    /* bind Transform */
    mTransform_Left  = new vl::Transform;
    mTransform_Right = new vl::Transform;
    rendering()->as<vl::Rendering>()->transform()->addChild( mTransform_Left.get() );
    rendering()->as<vl::Rendering>()->transform()->addChild( mTransform_Right.get() );

    /* define the Effect to be used */
    vl::ref<vl::Effect> effect = new vl::Effect;
    /* enable depth test and lighting */
    effect->shader()->enable(vl::EN_DEPTH_TEST);
    /* enable lighting and material properties */
    effect->shader()->setRenderState( new vl::Light, 0 );
    effect->shader()->enable(vl::EN_LIGHTING);
    effect->shader()->gocMaterial()->setDiffuse( vl::fvec4(1.0f,1.0f,1.0f,0.5f) );
    effect->shader()->gocLightModel()->setTwoSide(true);
    /* enable alpha blending */
    effect->shader()->enable(vl::EN_BLEND);

    /* load the object*/
    vl::ref<vl::Geometry> geom_no_sort;
    vl::ref<vl::Geometry> geom_sorted;
    vl::ref<vl::ResourceDatabase> res_db;
    res_db = vl::loadResource(mFileName); if ( res_db && res_db->count<vl::Geometry>() ) geom_no_sort = res_db->get<vl::Geometry>(0);
    res_db = vl::loadResource(mFileName); if ( res_db && res_db->count<vl::Geometry>() ) geom_sorted  = res_db->get<vl::Geometry>(0);

    if (!geom_no_sort->normalArray())
      geom_no_sort->computeNormals();

    if (!geom_sorted->normalArray())
      geom_sorted->computeNormals();

    /*
     if you want you can do

     geom_sorted->setDisplayListEnabled(true);

     or

     geom_sorted->setBufferObjectEnabled(true);

     but note that in this case the DepthSortCallback will schedule an update of the BufferObject or of the display list
     at every frame! This will almost centainly make the use of BufferObjects or display lists useful if not harmful, performance-wise.
    */

    /* add the two objects to the scene manager */
    vl::ref<vl::Actor> actor_no_sort = sceneManager()->tree()->addActor( geom_no_sort.get(), effect.get(), mTransform_Left.get() );
    vl::ref<vl::Actor> actor_sort    = sceneManager()->tree()->addActor( geom_sorted.get(),  effect.get(), mTransform_Right.get() );
    /* install the vl::DepthSortCallback that will depth-sort each primitive of the Actor upon rendering */
    actor_sort->actorEventCallbacks()->push_back( new vl::DepthSortCallback );

    /* compute the appropriate offset to be used in updateTransforms() */
    geom_no_sort->computeBounds();
    geom_sorted->computeBounds();
    mOffset = float( (geom_no_sort->boundingSphere().radius() + geom_sorted->boundingSphere().radius()) * 0.5 );

    /* positions the two objects next to one another */
    updateTransforms();

    /* Position the camera to nicely see the objects in the scene.
       You must call this function after having positioned your objects in the scene! */
    trackball()->adjustView( sceneManager(), vl::vec3(0,0,1), vl::vec3(0,1,0), 1.0f );
  }

  void updateTransforms()
  {
    vl::real degrees = vl::Time::currentTime() * 45.0f;
    vl::mat4 matrix  = vl::mat4::getRotation( degrees, 0,1,0 );
    mTransform_Left->setLocalMatrix( vl::mat4::getTranslation(-mOffset,0,0) * matrix );
    mTransform_Right->setLocalMatrix(vl::mat4::getTranslation(+mOffset,0,0) * matrix );
  }

  void updateScene() { updateTransforms(); }

protected:
  vl::ref<vl::Transform> mTransform_Left;
  vl::ref<vl::Transform> mTransform_Right;
  float mOffset;
  vl::String mFileName;
};
