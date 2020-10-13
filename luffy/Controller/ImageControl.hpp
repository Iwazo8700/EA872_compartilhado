

class ImageControl{
	private:
		std::shared_ptr<Images>	img;
	public:
		ImageControl(std::shared_ptr<Images> img): img(this->img) {};
		void change_position(int x, int y);
};
