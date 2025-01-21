# CMakeの最低バージョンを指定
cmake_minimum_required(VERSION 3.10)

# プロジェクト名と使用する言語を指定
project(SimpleRayTracing LANGUAGES CXX)

# 実行ファイルを作成する
add_executable(SimpleRayTracing src/main.cpp)

# 必要に応じて、C++の標準を指定
set_target_properties(SimpleRayTracing PROPERTIES CXX_STANDARD 17 CXX_STANDARD_REQUIRED YES)
