struct point2d
{
    int x,y; 
    point2d()
    {

    }
    point2d(int x,int y) : x(x) , y(y)
    {
        
    }

    point2d& operator+=(const point2d &t)
    {
        x += t.x;
        y += t.y;
        return *this;
    }

    point2d& operator-=(const point2d &t)
    {
        x -= t.x;
        y -= t.y;
        return *this;
    }

    point2d& operator*=(const point2d &t)
    {
        x *= t.x;
        y *= t.y;
        return *this;
    }

    point2d& operator/=(const point2d &t)
    {
        x /= t.x;
        y /= t.y;
        return *this;
    }

    point2d& operator+(const )
}