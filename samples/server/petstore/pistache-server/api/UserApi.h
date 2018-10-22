/**
* Swagger Petstore
* This is a sample server Petstore server.  You can find out more about Swagger at [http://swagger.io](http://swagger.io) or on [irc.freenode.net, #swagger](http://swagger.io/irc/).  For this sample, you can use the api key `special-key` to test the authorization filters.
*
* OpenAPI spec version: 1.0.0
* Contact: apiteam@swagger.io
*
* NOTE: This class is auto generated by the swagger code generator program.
* https://github.com/swagger-api/swagger-codegen.git
* Do not edit the class manually.
*/
/*
 * UserApi.h
 *
 * 
 */

#ifndef UserApi_H_
#define UserApi_H_


#include <pistache/endpoint.h>
#include <pistache/http.h>
#include <pistache/router.h>
#include <pistache/http_headers.h>

#include "User.h"
#include <string>
#include <vector>

namespace io {
namespace swagger {
namespace server {
namespace api {

using namespace io::swagger::server::model;

class  UserApi {
public:
    UserApi(Pistache::Address addr);
    virtual ~UserApi() {};
    void init(size_t thr);
    void start();
    void shutdown();

    const std::string base = "/v2";

private:
    void setupRoutes();

    void create_user_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response);
    void create_users_with_array_input_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response);
    void create_users_with_list_input_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response);
    void delete_user_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response);
    void get_user_by_name_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response);
    void login_user_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response);
    void logout_user_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response);
    void update_user_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response);
    void user_api_default_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response);

    std::shared_ptr<Pistache::Http::Endpoint> httpEndpoint;
    Pistache::Rest::Router router;


    /// <summary>
    /// Create user
    /// </summary>
    /// <remarks>
    /// This can only be done by the logged in user.
    /// </remarks>
    /// <param name="body">Created user object</param>
    virtual void create_user(const User &body, Pistache::Http::ResponseWriter &response) = 0;

    /// <summary>
    /// Creates list of users with given input array
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="body">List of user object</param>
    virtual void create_users_with_array_input(const User &body, Pistache::Http::ResponseWriter &response) = 0;

    /// <summary>
    /// Creates list of users with given input array
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="body">List of user object</param>
    virtual void create_users_with_list_input(const User &body, Pistache::Http::ResponseWriter &response) = 0;

    /// <summary>
    /// Delete user
    /// </summary>
    /// <remarks>
    /// This can only be done by the logged in user.
    /// </remarks>
    /// <param name="username">The name that needs to be deleted</param>
    virtual void delete_user(const std::string &username, Pistache::Http::ResponseWriter &response) = 0;

    /// <summary>
    /// Get user by user name
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="username">The name that needs to be fetched. Use user1 for testing.</param>
    virtual void get_user_by_name(const std::string &username, Pistache::Http::ResponseWriter &response) = 0;

    /// <summary>
    /// Logs user into the system
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="username">The user name for login</param>
    /// <param name="password">The password for login in clear text</param>
    virtual void login_user(const Optional<std::string> &username, const Optional<std::string> &password, Pistache::Http::ResponseWriter &response) = 0;

    /// <summary>
    /// Logs out current logged in user session
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    virtual void logout_user(Pistache::Http::ResponseWriter &response) = 0;

    /// <summary>
    /// Updated user
    /// </summary>
    /// <remarks>
    /// This can only be done by the logged in user.
    /// </remarks>
    /// <param name="username">name that need to be deleted</param>
    /// <param name="body">Updated user object</param>
    virtual void update_user(const std::string &username, const User &body, Pistache::Http::ResponseWriter &response) = 0;

};

}
}
}
}

#endif /* UserApi_H_ */

