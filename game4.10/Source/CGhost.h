namespace game_framework {
	/////////////////////////////////////////////////////////////////////////////
	// CGolst: Golst class
	/////////////////////////////////////////////////////////////////////////////

	class CGhost
	{
	public:
		CGhost();
		void LoadBitmap(int IDB[4][2]);		                    // 載入圖形
		void changeMode(int mode);                              // 切換模式(正常鬼/躲避鬼)
		bool isNormalMode();                                    // 精靈的狀態是否為正常狀態
		int  GetX1();                                           // 取得x1(左上角)
		int  GetY1();                                           // 取得y1(左上角)
		int  GetX2();                                           // 取得x2(右下角)
		int  GetY2();                                           // 取得y2(右下角)
		void SetInitXY(int x, int y);                           // 設定初始位置
		void SetTopLeft(int x, int y);

		void GoHome();                                          // 眼睛回家路徑
		double GetDistance(int x1, int x2, int y1, int y2);     // 取得下一步到家的直線距離

		void SetMap(int **map);                                 // 初始化地圖
		int FindMapIndex_X(int x);                              // 取得座標在矩陣的位置(X軸)
		int FindMapIndex_Y(int y);                              // 取得座標在矩陣的位置(Y軸)
		void GetMapIndex();                                     // 取得左上角及右下角在地圖的座標

		void OnMove();											// 移動
		void OnShow();											// 將圖形貼到畫面
	private:
		CAnimation animation_1;                                 // 精靈動畫_上
		CAnimation animation_2;                                 // 精靈動畫_下
		CAnimation animation_3;                                 // 精靈動畫_左
		CAnimation animation_4;                                 // 精靈動畫_右
		CAnimation animation_avoid;                             // 躲避精靈動畫_深藍色
		CAnimation animation_change;                            // 不穩定精靈動畫_深藍+白色交錯
		CAnimation animation_eyes;                              // 死亡精靈
		CAnimation *animation = &animation_4;                   // 目前方向動畫

		int init_x, init_y;                                     // 初始位置
		int x, y;                                               // 目前位置
		int avoidTime = 0;                                      // 躲避狀態持續時間
		int eyesDirection = 0;                                  // 眼睛行走方向
		double turnUp();                                        // 判斷是否可向上走，並回傳下一步距離目的地的距離
		double turnDown();                                      // 判斷是否可向下走，並回傳下一步距離目的地的距離
		double turnLeft();                                      // 判斷是否可向左走，並回傳下一步距離目的地的距離
		double turnRight();                                     // 判斷是否可向右走，並回傳下一步距離目的地的距離

		int **map;                                              // 遊戲地圖
		int MapIndex_X1;                                        // Pacman左上角位於地圖的座標(X軸)
		int MapIndex_Y1;                                        // Pacman左上角位於地圖的座標(Y軸)
		int MapIndex_X2;                                        // Pacman右下角位於地圖的座標(X軸)
		int MapIndex_Y2;                                        // Pacman右下角位於地圖的座標(Y軸)
	};
}