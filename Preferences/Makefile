ARCHS = arm64 arm64e
TARGET = iphone:clang:11.2:11.2

include $(THEOS)/makefiles/common.mk

BUNDLE_NAME = NetworkSpeedInfoPrefs
NetworkSpeedInfoPrefs_FILES = NSPAppearanceSettings.m NSPRootHeaderView.mm NSPRootListController.xm
NetworkSpeedInfoPrefs_INSTALL_PATH = /Library/PreferenceBundles
NetworkSpeedInfoPrefs_FRAMEWORKS = UIKit
NetworkSpeedInfoPrefs_PRIVATE_FRAMEWORKS = Preferences
NetworkSpeedInfoPrefs_LIBRARIES += sparkcolourpicker sparkapplist
NetworkSpeedInfoPrefs_CFLAGS += -fobjc-arc -Wno-deprecated-declarations
NetworkSpeedInfoPrefs_EXTRA_FRAMEWORKS += Cephei CepheiPrefs

include $(THEOS_MAKE_PATH)/bundle.mk

internal-stage::
	$(ECHO_NOTHING)mkdir -p $(THEOS_STAGING_DIR)/Library/PreferenceLoader/Preferences$(ECHO_END)
	$(ECHO_NOTHING)cp entry.plist $(THEOS_STAGING_DIR)/Library/PreferenceLoader/Preferences/NetworkSpeedInfoPrefs.plist$(ECHO_END)
