namespace game_framework {
	/////////////////////////////////////////////////////////////////////////////
	// �o��class����¶��骺�y
	// �����N�i�H��g���ۤv���{���F
	/////////////////////////////////////////////////////////////////////////////

	class CElf
	{
	public:
		CElf();
		void LoadBitmap(int IDB);										// ���J�ϧ�
		void OnMove();											// ����
		void OnShow();											// �N�ϧζK��e��
	private:
		CMovingBitmap pic;                                      // ���J����
		int x, y;
	};
}