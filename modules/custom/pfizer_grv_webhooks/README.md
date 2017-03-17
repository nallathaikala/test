# Overview

This module is designed to allow Javascript code in the page to make a call to the server that will then call an external webservice and return data.

This module assumes the external webservice is protected with Basic HTTP Authentication.

In order to work, the module requires the following variables to be defined in the `$conf` array in `local.settings.php`.

```
$conf['pfizer_grv_webhooks_hcp_validate_url'] - The URL of ther service to be invoked
$conf['pfizer_grv_webhooks_hcp_validate_user'] - The HTTP Auth username
$conf['pfizer_grv_webhooks_hcp_validate_pass'] - The HTTP Auth password 
```

The url to access the data is:
`http://[domain]/pfizer-grv-webhooks/hcp-validation/[uuid]/[country]`
