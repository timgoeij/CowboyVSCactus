class LoaderParams
{
	public:
		Loaderparams(int x, int y, int width, int height, std::string textureId) :
			m_x(x), m_y(y), m_width(width), m_height(height), m_textureId(textureId)
		{
				
		}
			
		
		int GetX() const {
			return m_x;
		}
		
		
		int GetY() const {
			return m_y;
		}
		
		
		int GetWidth() const{
			return m_width
		}
		
		
		int GetHeight() const{
			return m_height;
		}
		
		std::string GetTextureId() const{
			return m_textureId;
		}
		
		private:
			int m_x;
			int m_y;
			int m_width;
			int m_height;
			std::string m_textureId;
}