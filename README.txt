Some Pike bindings for Allegro5 (v5.2.2.1).
Works with Pike v8.0

NOTE: 
Uncomment the line (in the file Allegro.cmod): 
	// void* __dso_handle; 
if linker complains about "undefined hidden symbol `__dso_handle'".

To build:
  autoheader
  pike -x module
  sudo pike -x module install
(for documentation)
  pike -x module module_modref

A short example that opens a window and displays an image.

int main()
{
    Allegro.init(Allegro.SUBSYSTEM_ALL);
    Allegro.init_addons(Allegro.ADDON_IMAGE);
    Allegro.Display display = Allegro.Display(600, 400);
    Allegro.Bitmap bitmap = Allegro.Bitmap("img.png");
    Allegro.Color clear_color = Allegro.Color(0, 0, 0);
    
    display->clear_to_color(clear_color);
    bitmap->draw(0.0, 0.0, 0);
    display->flip();

    sleep(5);
    return 0;

}

    
 

