#include <stdio.h>
//#include <pcap.h>
#include <glib.h>

gboolean timeout_callback(gpointer data)
{
    static int i = 0;

    i++;
    g_print("timeout_callback called %d times\n", i);
    if (10 == i)
    {
        g_main_loop_quit( (GMainLoop*)data );
        return FALSE;
    }

    return TRUE;
}

int main(int argc, char *argv[])
{
    GMainLoop *loop;

    loop = g_main_loop_new ( NULL , FALSE );

    // add source to default context
    g_timeout_add (100 , timeout_callback , loop);
    g_main_loop_run (loop);
    g_main_loop_unref(loop);

    return 0;
}
