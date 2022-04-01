namespace game_framework {
	/////////////////////////////////////////////////////////////////////////////
	// 這個class提供繞圈圈的球
	// 看懂就可以改寫成自己的程式了
	/////////////////////////////////////////////////////////////////////////////

	class CGameMap
	{
	public:
		CGameMap();
		void LoadBitmap();			//載入地圖
		void OnShow();				//顯示地圖
		void SetMap(int maptype);	//選擇地圖
	protected:
		CMovingBitmap wall, Food;	//構成整個地圖的小地圖，分別有牆壁跟豆子
		int map[31][28];			//構成地圖的陣列
		const int X, Y;				//大地圖左上角的座標
		const int MW, MH;			//小地圖的長跟寬
	};
}