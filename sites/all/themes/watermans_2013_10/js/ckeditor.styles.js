/*
 Copyright (c) 2003-2013, CKSource - Frederico Knabben. All rights reserved.
 For licensing, see LICENSE.html or http://ckeditor.com/license
 */

/*
 * This file is used/requested by the 'Styles' button.
 * The 'Styles' button is not enabled by default in DrupalFull and DrupalFiltered toolbars.
 */
if (typeof (CKEDITOR) !== 'undefined') {
    CKEDITOR.addStylesSet('drupal',
            [
                {
                    name: 'Colour: Red',
                    element: 'span',
                    attributes:
                            {
                                'class': 'red'
                            }
                },
                {
                    name: 'Colour: Blue',
                    element: 'span',
                    attributes:
                            {
                                'class': 'blue'
                            }
                },
                {
                    name: 'Paragraph - Left Border',
                    element: 'p',
                    attributes:
                            {
                                'class': 'left-border'
                            }
                },
                {
                    name: 'Modal Pop Up Link',
                    element: 'a',
                    attributes:
                            {
                                'class': 'modalcontent'
                            }
                },
            ]);
}