float erff(float x)
{
        float gammp(float a, float x);

	return x < 0.0 ? -gammp(0.5,x*x) : gammp(0.5,x*x);
}
