

class Partida final
{
public:
	static Partida& GetInstance();

private:
	Partida() = default;
	~Partida() = default;

	Partida(const Partida&) = delete;
	Partida& operator=(const Partida&) = delete;
	Partida(Partida&&) = delete;
	Partida& operator=(Partida&&) = delete;
};

Partida& Partida::GetInstance()
{
	static Partida instance;
	return instance;
}