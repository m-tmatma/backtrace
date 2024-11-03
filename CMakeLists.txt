cmake_minimum_required(VERSION 3.10)

# プロジェクト名とバージョン
project(BacktraceExample VERSION 1.0)

# 実行ファイルの生成
add_executable(backtrace_example backtrace.c)

# -rdynamic オプションを追加
target_link_options(backtrace_example PRIVATE -rdynamic)
