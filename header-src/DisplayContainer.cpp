#include "../header/DisplayContainer.h"
DisplayContainer::DisplayContainer()
{
    al_init(); // I'm not checking the return value for simplicity.
    al_init_image_addon();
    al_init_primitives_addon();
}

DisplayContainer* DisplayContainer::setWindowSize(int w, int h)
{
    width = w;
    height = h;

    return this;
}

DisplayContainer* DisplayContainer::setImage(char* path)
{
    bmImage = al_load_bitmap(path);
    return this;
}

DisplayContainer* DisplayContainer::fullScreen()
{
    ALLEGRO_DISPLAY_MODE disp_data;
    al_get_display_mode(al_get_num_display_modes() - 1, &disp_data);

    width = disp_data.width;
    height = disp_data.height;

    al_set_new_display_flags(ALLEGRO_FULLSCREEN);

    return this;
}

DisplayContainer* DisplayContainer::delay(double t)
{
    al_rest(t);

    return this;
}

DisplayContainer* DisplayContainer::destroyDisplay()
{
    al_destroy_display(display);

    return this;
}

DisplayContainer* DisplayContainer::draw()
{
    display = al_create_display(width, height);

    return this;
}

DisplayContainer* DisplayContainer::flip()
{
    al_draw_bitmap(bmImage, 0, 0, 20);
    al_flip_display();

    return this;
}

void DisplayContainer::printSomething()
{
    std::cout<<"im here!";
}
