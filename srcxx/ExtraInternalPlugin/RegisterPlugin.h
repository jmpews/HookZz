#ifndef EXTRAL_INTERNAL_PLUGIN_REGISTER_H_
#define EXTRAL_INTERNAL_PLUGIN_REGISTER_H_

class ExtraInternalPlugin {
public:
    registerPlugin(const char *name, void *handler);
};

#endif