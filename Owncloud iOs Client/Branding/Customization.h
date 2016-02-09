//
//  Customization.h
//  Owncloud iOs Client
//
//  Created by Javier Gonzalez on 5/3/13.
//

/*
 Copyright (C) 2014, ownCloud, Inc.
 This code is covered by the GNU Public License Version 3.
 For distribution utilizing Apple mechanisms please see https://owncloud.org/contribute/iOS-license-exception/
 You should have received a copy of this license
 along with this program. If not, see <http://www.gnu.org/licenses/gpl-3.0.en.html>.
 */


//app year
#define k_year 2015

#define k_brand_owner @"T.net Italia S.p.A."

//URLs Setting
#define k_help_url @"http://www.tnet.it/cloudbag-faq"
#define k_recomended_url @"http://tnet.it/cloud-bag"
#define k_send_feedback @"http://tnet.it/contatti"
#define k_about_url @"http://www.tnet.it/chi-siamo-app"
#define k_upgrade_url @"http://portal.tnet.it/clientarea.php"

//Hide url server
#define k_hide_url_server YES

//Set a default url server. It must be obligaroy if we hide the url server (#define k_hide_url_server YES)
#define k_default_url_server @"https://cloudbag.tnet.it"

//Show multiaccount or disconnect
#define k_multiaccount_available YES

//Have icon on backbutton
#define k_have_icon_on_popover YES

//Have image background on navigation bar
#define k_have_image_background_navigation_bar NO

//Have oauth active
#define k_is_oauth_active NO

//Have SAML active
#define k_is_sso_active NO

//OAuth server
#define k_oauth_login @""
#define k_oauth_authorize @""
#define k_oauth_token @""
#define k_oauth_webservice @""
#define k_oauth_client_id @"" //the same in k_oauth_login

//Mail feedback
#define k_mail_feedback @"support@tnet.it"

//Social
#define k_download_url_short @"http://apple.co/1UzFdyn"
#define k_download_url_long @"https://itunes.apple.com/it/app/cloudbag/id1068531764?mt=8"
#define k_twitter_user @"@Tnet_Italia"

//Minimun files until show letters on separators
#define k_minimun_files_to_show_separators 20

//show logo or name on title of file list
#define k_show_logo_on_title_file_list YES

//Show help
#define k_show_help_option_on_settings YES

//Show social
#define k_show_recommend_option_on_settings YES

//Show feedback
#define k_show_feedback_option_on_settings YES

//Show impressum
#define k_show_imprint_option_on_settings YES

//Buy more storage company name
#define k_company_name_buy_more_storage @""

//Customize UITabBar
#define k_is_customize_uitabbar YES

//Customize Unselected UITabBarItems (The images of tabBar should be the unseleted tabs)
#define k_is_customize_unselectedUITabBarItems YES

//Set Image on Preview Bottom toolBar on iPhone
#define k_set_image_on_preview_bottom_toolBar_on_iPhone NO

//Impressum is a File
#define k_impressum_is_file NO

//Impressum url if is not a file
#define k_impressum_url @"http://tnet.it/privacy-policy"

//Customize recomend mail
#define k_is_custom_recommend_mail NO
#define k_is_username_recommend_mail NO
//#define k_subject_recommend_mail @"Sehen Sie sich die mobilcom-debitel Cloud an!"
#define k_subject_recommend_mail @""
// /r/n needed for CR and LF
#define k_text_recommend_mail @""
#define k_is_sign_custom_usign_username NO

//Customize background of bar bottom preview with image or color
#define k_is_image_background_preview_bottom_bar NO

//Social customize
#define k_is_custom_twitter YES
#define k_custom_twitter_message @"Prova subito CloudBag (http://bit.ly/1J6ogdI), il cloud storage che ti offre 10GB gratis su server italiani! Segui @Tnet_Italia #cloudbag"
#define k_is_custom_facebook YES
#define k_custom_facebook_message @"Prova subito CloudBag (http://bit.ly/1J6ogdI), il cloud storage che ti offre 10GB gratis su server italiani! Segui @Tnet_Italia #cloudbag"

//Autocomplete Login
#define k_is_autocomplete_username_necessary NO
#define k_letter_to_begin_autocomplete @"@"
#define k_text_to_autocomplete @""

//Number of uploads shown in recents tab from the database
#define k_number_uploads_shown 30

//Set text of status bar white only for iOS 7. YES = White | NO = Black
#define k_is_text_status_bar_white NO

//Show the help link on login
#define k_is_shown_help_link_on_login YES
#define k_url_link_on_login @"http://portal.tnet.it/cart.php?a=add&pid=81"

//User-Agent
#define k_user_agent @"Mozilla/5.0 (iOS) CloudBag-iOS/"

//Enable/Disable Background uploads and download (NSURLSession or NSOperation)
#define k_is_background_active YES

//Hide the share options
#define k_hide_share_options NO

//Help Guide init app
#define k_show_main_help_guide YES
