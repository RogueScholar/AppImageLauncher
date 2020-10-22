#pragma once

// system headers
#include <string.h>

// library headers
#include <QDebug>
#include <QTextStream>

// wrapper for stdout
#define qout() QTextStream(stdout, QIODevice::WriteOnly)

// wrapper for stderr
#define qerr() QTextStream(stderr, QIODevice::WriteOnly)
