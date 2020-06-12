THEOS_DEVICE_IP = iphone
ARCHS = arm64 arm64e
TARGET = iphone:clang:13.2:13.2

INSTALL_TARGET_PROCESSES = SpringBoard

include $(THEOS)/makefiles/common.mk
GO_EASY_ON_ME = 1

TWEAK_NAME = NetworkSpeed
NetworkSpeed_FILES = NetworkSpeed.xm
NetworkSpeed_CFLAGS += -fobjc-arc -Wno-logical-op-parentheses
NetworkSpeed_LIBRARIES += sparkcolourpicker sparkapplist
NetworkSpeed_EXTRA_FRAMEWORKS += Cephei

include $(THEOS_MAKE_PATH)/tweak.mk

SUBPROJECTS += Preferences
include $(THEOS_MAKE_PATH)/aggregate.mk