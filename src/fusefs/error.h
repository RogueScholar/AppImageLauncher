#pragma once

// system includes
#include <stdexcept>

// base class
class AppImageLauncherFSError : public std::runtime_error {
public:
    explicit AppImageLauncherFSError(const std::string& msg = "") : runtime_error(msg) {}
};

class AlreadyRunningError : public AppImageLauncherFSError { using AppImageLauncherFSError::AppImageLauncherFSError; };
class CouldNotOpenFileError : public AppImageLauncherFSError { using AppImageLauncherFSError::AppImageLauncherFSError; };
class FileNotFoundError : public AppImageLauncherFSError { using AppImageLauncherFSError::AppImageLauncherFSError; };
class InvalidPathError : public AppImageLauncherFSError { using AppImageLauncherFSError::AppImageLauncherFSError; };
class CouldNotFindRegisteredAppImageError : public AppImageLauncherFSError { using AppImageLauncherFSError::AppImageLauncherFSError; };

class AppImageAlreadyRegisteredError : public AppImageLauncherFSError {
private:
    const int _id;

public:
    explicit AppImageAlreadyRegisteredError(int id) : _id(id) {};

public:
    int id() {
        return _id;
    }
};

class DuplicateRegisteredAppImageError : public AppImageLauncherFSError {
private:
    const int _firstId;
    const int _secondId;

public:
    DuplicateRegisteredAppImageError(int firstId, int secondId) : _firstId(firstId), _secondId(secondId) {};

public:
    int firstId() {
        return _firstId;
    }

    int secondId() {
        return _secondId;
    }
};
