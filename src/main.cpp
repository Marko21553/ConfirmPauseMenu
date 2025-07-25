#include <Geode/Geode.hpp>
#include <Geode/modify/PauseLayer.hpp>
#include <Geode/ui/Popup.hpp>

using namespace geode::prelude;

class $modify(PauseLayer) {
	struct Fields {
		bool m_oreomilkshake = false;
	};
	void onQuit(cocos2d::CCObject* p0) {
		if (m_fields->m_oreomilkshake || !Mod::get()->getSettingValue<bool>("enableQuit")) return PauseLayer::onQuit(p0);
		createQuickPopup(Mod::get()->getSettingValue<std::string>("confirmDialogString").c_str(), Mod::get()->getSettingValue<std::string>("quitString"), Mod::get()->getSettingValue<std::string>("noString").c_str(), Mod::get()->getSettingValue<std::string>("yesString").c_str(),
				[this, p0](auto, bool p1) {
					if (p1) {
						m_fields->m_oreomilkshake = true;
						PauseLayer::onQuit(p0);
						m_fields->m_oreomilkshake = false;
					}
				});
	}
	void onRestart(cocos2d::CCObject* p0) {
		if (m_fields->m_oreomilkshake || !Mod::get()->getSettingValue<bool>("enableRestart")) return PauseLayer::onRestart(p0);
		createQuickPopup(Mod::get()->getSettingValue<std::string>("confirmDialogString").c_str(), Mod::get()->getSettingValue<std::string>("restartString"), Mod::get()->getSettingValue<std::string>("noString").c_str(), Mod::get()->getSettingValue<std::string>("yesString").c_str(),
				[this, p0](auto, bool p1) {
					if (p1) {
						m_fields->m_oreomilkshake = true;
						PauseLayer::onRestart(p0);
						m_fields->m_oreomilkshake = false;
					}
				});
	}
	void onPracticeMode(cocos2d::CCObject* p0) {
		if (m_fields->m_oreomilkshake || !Mod::get()->getSettingValue<bool>("enablePracticeMode")) return PauseLayer::onPracticeMode(p0);
		createQuickPopup(Mod::get()->getSettingValue<std::string>("confirmDialogString").c_str(), Mod::get()->getSettingValue<std::string>("practiceString"), Mod::get()->getSettingValue<std::string>("noString").c_str(), Mod::get()->getSettingValue<std::string>("yesString").c_str(),
				[this, p0](auto, bool p1) {
					if (p1) {
						m_fields->m_oreomilkshake = true;
						PauseLayer::onPracticeMode(p0);
						m_fields->m_oreomilkshake = false;
					}
				});
	}
	void onNormalMode(cocos2d::CCObject* p0) {
		if (m_fields->m_oreomilkshake || !Mod::get()->getSettingValue<bool>("enableNormalMode")) return PauseLayer::onNormalMode(p0);
		createQuickPopup(Mod::get()->getSettingValue<std::string>("confirmDialogString").c_str(), Mod::get()->getSettingValue<std::string>("normalString"), Mod::get()->getSettingValue<std::string>("noString").c_str(), Mod::get()->getSettingValue<std::string>("yesString").c_str(),
				[this, p0](auto, bool p1) {
					if (p1) {
						m_fields->m_oreomilkshake = true;
						PauseLayer::onNormalMode(p0);
						m_fields->m_oreomilkshake = false;
					}
				});
	}
	void onEdit(cocos2d::CCObject* p0) {
		if (m_fields->m_oreomilkshake || !Mod::get()->getSettingValue<bool>("enableEdit")) return PauseLayer::onEdit(p0);
		createQuickPopup(Mod::get()->getSettingValue<std::string>("confirmDialogString").c_str(), Mod::get()->getSettingValue<std::string>("editString"), Mod::get()->getSettingValue<std::string>("noString").c_str(), Mod::get()->getSettingValue<std::string>("yesString").c_str(),
				[this, p0](auto, bool p1) {
					if (p1) {
						m_fields->m_oreomilkshake = true;
						PauseLayer::onEdit(p0);
						m_fields->m_oreomilkshake = false;
					}
				});
	}
};
