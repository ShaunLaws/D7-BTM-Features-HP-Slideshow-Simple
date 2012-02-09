
-- SUMMARY --

The BTM Features HP Slideshow Simple module is a Features-generated module that
eases the deployment of a simple home page slideshow.


-- FEATURES --

  - Non-configurable rotating home page slideshow.
  - No controls, links or overlays
  - size of slideshow is determined by the imagecache preset
  - no CSS is provided


-- REQUIREMENTS --

None.


-- INSTALLATION --

* This module is dependent on the following modules:

  - BTM Support HP Slideshow Simple - available at:

    git@github.com:ShaunLaws/btm_support_hp_slideshow_simple.git

  - Features
  - ImageApi
  - ImageApi GD
  - Imagecache and Imagecache UI
  - Image Field
  - Jquery Plugin - contains the cycle plugin that is used by this module
  - Location
  - Views

* Download these modules to your site if they are not already installed

* Download the module

$ cd path/to/modules/contrib_local
$ git clone git@github.com:ShaunLaws/D7-BTM-Features-HP-Slideshow-Simple.git

* Install as usual, see http://drupal.org/node/70151 for further information.

* Installation will introduce the following feature elements:

  - Slideshow content type with a single multi-value slideshow-field_image field
  - "slideshow" imagecache preset
  - slideshow content type permissions
  - Site Admin and Super Admin role (if they don't already exist)
  - the Slideshow view and "Slideshow: Block" block

* the module assumes that only one published instance of the slideshow content
and the images in that instance will be displayed as the slideshow

-- CONFIGURATION --

* Configure user permissions in User Management » Permissions »
  features module:

  - create slideshow content
  - delete any slideshow content
  - delete own slideshow content
  - edit any slideshow content
  - edit own slideshow content

* place the "Slideshow: Block" block in the desired region - Site Building » Blocks » List

  - 'configure' the block and set it to only show on <front>

* to quickly test, use devel generate to generate one node of type slideshow


-- CUSTOMIZATION --

* slideshow content type

  - admin/content/node-type/slideshow/fields/field_image

    - change the help text, permitted file extensions, min and max resolution,
      path settings, file size restrictions, alt/title text settings, default
      image and global settings to suit your needs

  - admin/build/imagecache/slideshow

    - click 'override defaults' and edit the slideshow preset to suit your needs

  - no styling is supplied, so add css as needed