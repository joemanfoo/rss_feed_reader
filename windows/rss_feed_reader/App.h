#pragma once

#include "App.xaml.g.h"



namespace winrt::rss_feed_reader::implementation
{
    struct App : AppT<App>
    {
        App() noexcept;
    };
} // namespace winrt::rss_feed_reader::implementation


