--- a/src/base/fm-config.h
+++ b/src/base/fm-config.h
@@ -48,7 +48,7 @@
 #define     FM_CONFIG_DEFAULT_CONFIRM_TRASH     TRUE
 #define     FM_CONFIG_DEFAULT_NO_USB_TRASH      TRUE
 
-#define     FM_CONFIG_DEFAULT_BIG_ICON_SIZE     48
+#define     FM_CONFIG_DEFAULT_BIG_ICON_SIZE     36
 #define     FM_CONFIG_DEFAULT_SMALL_ICON_SIZE   16
 #define     FM_CONFIG_DEFAULT_PANE_ICON_SIZE    16
 #define     FM_CONFIG_DEFAULT_THUMBNAIL_SIZE    128
@@ -58,25 +58,25 @@
 #define     FM_CONFIG_DEFAULT_THUMBNAIL_MAX     2048
 
 #define     FM_CONFIG_DEFAULT_FORCE_S_NOTIFY    TRUE
-#define     FM_CONFIG_DEFAULT_BACKUP_HIDDEN     TRUE
+#define     FM_CONFIG_DEFAULT_BACKUP_HIDDEN     FALSE
 #define     FM_CONFIG_DEFAULT_NO_EXPAND_EMPTY   FALSE
 #define     FM_CONFIG_DEFAULT_SHOW_FULL_NAMES   FALSE
 #define     FM_CONFIG_DEFAULT_ONLY_USER_TEMPLATES FALSE
 #define     FM_CONFIG_DEFAULT_TEMPLATE_RUN_APP  FALSE
 #define     FM_CONFIG_DEFAULT_TEMPL_TYPE_ONCE   FALSE
-#define     FM_CONFIG_DEFAULT_SHADOW_HIDDEN     FALSE
+#define     FM_CONFIG_DEFAULT_SHADOW_HIDDEN     TRUE
 #define     FM_CONFIG_DEFAULT_DEFER_CONTENT_TEST FALSE
 #define     FM_CONFIG_DEFAULT_QUICK_EXEC        FALSE
 #define     FM_CONFIG_DEFAULT_SMART_DESKTOP_AUTODROP TRUE
 
 #define     FM_CONFIG_DEFAULT_PLACES_HOME       TRUE
 #define     FM_CONFIG_DEFAULT_PLACES_DESKTOP    TRUE
-#define     FM_CONFIG_DEFAULT_PLACES_ROOT       FALSE
+#define     FM_CONFIG_DEFAULT_PLACES_ROOT       TRUE
 #define     FM_CONFIG_DEFAULT_PLACES_COMPUTER   FALSE
 #define     FM_CONFIG_DEFAULT_PLACES_TRASH      TRUE
-#define     FM_CONFIG_DEFAULT_PLACES_APPLICATIONS TRUE
-#define     FM_CONFIG_DEFAULT_PLACES_NETWORK    FALSE
-#define     FM_CONFIG_DEFAULT_PLACES_UNMOUNTED  TRUE
+#define     FM_CONFIG_DEFAULT_PLACES_APPLICATIONS FALSE
+#define     FM_CONFIG_DEFAULT_PLACES_NETWORK    TRUE
+#define     FM_CONFIG_DEFAULT_PLACES_UNMOUNTED  FALSE
 
 #define     FM_CONFIG_DEFAULT_AUTO_SELECTION_DELAY 600
 