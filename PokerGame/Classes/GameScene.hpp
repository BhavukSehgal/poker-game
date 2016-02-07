//
//  GameScene.hpp
//  PokerGame
//

#ifndef __PokerGame__GameScene__
#define __PokerGame__GameScene__

#include "cocos2d.h"

#include "ui/CocosGUI.h"

USING_NS_CC;

class GameScene : public cocos2d::Layer
{
// ----- クラスメソッド
public:
    static cocos2d::Scene* createScene();

// ----- インスタンス変数
private:
    int credit { 0 }; // クレジット数
    int win    { 0 }; // Win数

    ui::Button* betButton  { nullptr }; // BETボタン
    ui::Button* dealButton { nullptr }; // DEALボタン

// ----- インスタンスメソッド
private:
    virtual bool init(); // 初期化
    
    void setupScreen();  // 画面の設定
    void setupGame();    // ゲームの初期設定

    void onBetButtonTouched(Ref *pSender, ui::Widget::TouchEventType type);  // BETボタンがタッチされたとき
    void onDealButtonTouched(Ref *pSender, ui::Widget::TouchEventType type); // DEALボタンがタッチされたとき

    CREATE_FUNC(GameScene);
};

#endif /* defined(__PokerGame__GameScene__) */
