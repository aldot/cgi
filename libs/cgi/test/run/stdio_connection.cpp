#include <boost/system/error_code.hpp>
#include "boost/cgi/import/buffer.hpp"
#include "boost/cgi/connections/stdio.hpp"

int main()
{
  boost::cgi::connections::stdio conn;
  boost::system::error_code ec;

  conn.write_some(boost::cgi::common::buffer("Hello, world"), ec);

  return 0;
}
