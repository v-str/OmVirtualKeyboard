### OmVirtualKeyboard

## Branch: tight bouned sources

[![Build Status](https://travis-ci.org/OrdinaryMind/OmVirtualKeyboard.svg?branch=develop)](https://travis-ci.com/OrdinaryMind/OmVirtualKeyboard)

<img src='https://github.com/OrdinaryMind/OmVirtualKeyboard/blob/sources_only/keyboard_sources_app.png'>

# Note
If you want to see lauchable application, please see [sources_app](https://github.com/OrdinaryMind/OmVirtualKeyboard/tree/sources_app)

Virtual keyboard source files.
Usage of this keyboard is very easy and fun.

In general, you should do few steps:

1. Place the sources into you favorite application source tree
1. Insert sources and headers into your build system (qmake,make,CMake)
1. Use it!

OmVirtualKeyboard is intended for usage with QLineEdit widget. You can
modify it if needed for work with other text widgets.

Basically for work with QLineEdit widget you should define OmVirtualKeyboard
instance and connect it with your QLineEdit:

```C++

SomeClassConstructor::SomeClassConstructor(QWidget * parent)
	: QWidget(parent)
{
	QLineEdit * pLine = new QLineEdit(this);
	KeyboardWidget * pKeyboard = new KeyboardWidget(this);

	pKeyboard->attachTo(pLine);
}
```

That's all. Now you are ready to write into your QLineEdit instance.

If you want to disconnect keyboard you should call:

```C++
	pKeyboard->detachReceiver();
```
