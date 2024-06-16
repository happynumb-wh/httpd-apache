/*
 * THIS FILE WAS AUTOGENERATED BY make_exports.awk
 *
 * This is an ugly hack that needs to be here, so
 * that libtool will link all of the APR functions
 * into server regardless of whether the base server
 * uses them.
 */

#define CORE_PRIVATE

#include "apr_anylock.h"
#include "apr_base64.h"
#include "apr_buckets.h"
#include "apr_crypto.h"
#include "apr_date.h"
#include "apr_dbd.h"
#include "apr_dbm.h"
#include "apr_hooks.h"
#include "apr_ldap_init.h"
#include "apr_ldap_option.h"
#include "apr_ldap_rebind.h"
#include "apr_ldap_url.h"
#include "apr_md4.h"
#include "apr_md5.h"
#include "apr_memcache.h"
#include "apr_optional.h"
#include "apr_optional_hooks.h"
#include "apr_queue.h"
#include "apr_redis.h"
#include "apr_reslist.h"
#include "apr_rmm.h"
#include "apr_sdbm.h"
#include "apr_sha1.h"
#include "apr_siphash.h"
#include "apr_strmatch.h"
#include "apr_thread_pool.h"
#include "apr_uri.h"
#include "apr_uuid.h"
#include "apr_xlate.h"
#include "apr_xml.h"
#include "apu_errno.h"
#include "apu_version.h"
#include "apr_crypto_internal.h"
#include "apr_dbd_internal.h"
#include "apr_dbd_odbc_v2.h"
#include "apr_dbm_private.h"
#include "apu_internal.h"

const void *ap_ugly_hack = NULL;

/*
 * /home/wanghan/Workspace/DASICS_ICT/DASICS-DEMO/httpd-apache/httpd-2.4.59/srclib/apr-util/include/apr_base64.h
 */
const void *ap_hack_apr_base64_encode_len = (const void *)apr_base64_encode_len;
const void *ap_hack_apr_base64_encode = (const void *)apr_base64_encode;
const void *ap_hack_apr_base64_encode_binary = (const void *)apr_base64_encode_binary;
const void *ap_hack_apr_base64_decode_len = (const void *)apr_base64_decode_len;
const void *ap_hack_apr_base64_decode = (const void *)apr_base64_decode;
const void *ap_hack_apr_base64_decode_binary = (const void *)apr_base64_decode_binary;

/*
 * /home/wanghan/Workspace/DASICS_ICT/DASICS-DEMO/httpd-apache/httpd-2.4.59/srclib/apr-util/include/apr_buckets.h
 */
const void *ap_hack_apr_brigade_create = (const void *)apr_brigade_create;
const void *ap_hack_apr_brigade_destroy = (const void *)apr_brigade_destroy;
const void *ap_hack_apr_brigade_cleanup = (const void *)apr_brigade_cleanup;
const void *ap_hack_apr_brigade_split_ex = (const void *)apr_brigade_split_ex;
const void *ap_hack_apr_brigade_split = (const void *)apr_brigade_split;
const void *ap_hack_apr_brigade_partition = (const void *)apr_brigade_partition;
const void *ap_hack_apr_brigade_length = (const void *)apr_brigade_length;
const void *ap_hack_apr_brigade_flatten = (const void *)apr_brigade_flatten;
const void *ap_hack_apr_brigade_pflatten = (const void *)apr_brigade_pflatten;
const void *ap_hack_apr_brigade_split_line = (const void *)apr_brigade_split_line;
const void *ap_hack_apr_brigade_to_iovec = (const void *)apr_brigade_to_iovec;
const void *ap_hack_apr_brigade_vputstrs = (const void *)apr_brigade_vputstrs;
const void *ap_hack_apr_brigade_write = (const void *)apr_brigade_write;
const void *ap_hack_apr_brigade_writev = (const void *)apr_brigade_writev;
const void *ap_hack_apr_brigade_puts = (const void *)apr_brigade_puts;
const void *ap_hack_apr_brigade_putc = (const void *)apr_brigade_putc;
const void *ap_hack_apr_brigade_putstrs = (const void *)apr_brigade_putstrs;
const void *ap_hack_apr_brigade_printf = (const void *)apr_brigade_printf;
const void *ap_hack_apr_brigade_vprintf = (const void *)apr_brigade_vprintf;
const void *ap_hack_apr_brigade_insert_file = (const void *)apr_brigade_insert_file;
const void *ap_hack_apr_bucket_alloc_create = (const void *)apr_bucket_alloc_create;
const void *ap_hack_apr_bucket_alloc_create_ex = (const void *)apr_bucket_alloc_create_ex;
const void *ap_hack_apr_bucket_alloc_destroy = (const void *)apr_bucket_alloc_destroy;
const void *ap_hack_apr_bucket_alloc_aligned_floor = (const void *)apr_bucket_alloc_aligned_floor;
const void *ap_hack_apr_bucket_alloc = (const void *)apr_bucket_alloc;
const void *ap_hack_apr_bucket_free = (const void *)apr_bucket_free;
const void *ap_hack_apr_bucket_setaside_noop = (const void *)apr_bucket_setaside_noop;
const void *ap_hack_apr_bucket_setaside_notimpl = (const void *)apr_bucket_setaside_notimpl;
const void *ap_hack_apr_bucket_split_notimpl = (const void *)apr_bucket_split_notimpl;
const void *ap_hack_apr_bucket_copy_notimpl = (const void *)apr_bucket_copy_notimpl;
const void *ap_hack_apr_bucket_destroy_noop = (const void *)apr_bucket_destroy_noop;
const void *ap_hack_apr_bucket_simple_split = (const void *)apr_bucket_simple_split;
const void *ap_hack_apr_bucket_simple_copy = (const void *)apr_bucket_simple_copy;
const void *ap_hack_apr_bucket_shared_make = (const void *)apr_bucket_shared_make;
const void *ap_hack_apr_bucket_shared_destroy = (const void *)apr_bucket_shared_destroy;
const void *ap_hack_apr_bucket_shared_split = (const void *)apr_bucket_shared_split;
const void *ap_hack_apr_bucket_shared_copy = (const void *)apr_bucket_shared_copy;
const void *ap_hack_apr_bucket_eos_create = (const void *)apr_bucket_eos_create;
const void *ap_hack_apr_bucket_eos_make = (const void *)apr_bucket_eos_make;
const void *ap_hack_apr_bucket_flush_create = (const void *)apr_bucket_flush_create;
const void *ap_hack_apr_bucket_flush_make = (const void *)apr_bucket_flush_make;
const void *ap_hack_apr_bucket_immortal_create = (const void *)apr_bucket_immortal_create;
const void *ap_hack_apr_bucket_immortal_make = (const void *)apr_bucket_immortal_make;
const void *ap_hack_apr_bucket_transient_create = (const void *)apr_bucket_transient_create;
const void *ap_hack_apr_bucket_transient_make = (const void *)apr_bucket_transient_make;
const void *ap_hack_apr_bucket_heap_create = (const void *)apr_bucket_heap_create;
const void *ap_hack_apr_bucket_heap_make = (const void *)apr_bucket_heap_make;
const void *ap_hack_apr_bucket_pool_create = (const void *)apr_bucket_pool_create;
const void *ap_hack_apr_bucket_pool_make = (const void *)apr_bucket_pool_make;
#if APR_HAS_MMAP
const void *ap_hack_apr_bucket_mmap_create = (const void *)apr_bucket_mmap_create;
const void *ap_hack_apr_bucket_mmap_make = (const void *)apr_bucket_mmap_make;
#endif
const void *ap_hack_apr_bucket_socket_create = (const void *)apr_bucket_socket_create;
const void *ap_hack_apr_bucket_socket_make = (const void *)apr_bucket_socket_make;
const void *ap_hack_apr_bucket_pipe_create = (const void *)apr_bucket_pipe_create;
const void *ap_hack_apr_bucket_pipe_make = (const void *)apr_bucket_pipe_make;
const void *ap_hack_apr_bucket_file_create = (const void *)apr_bucket_file_create;
const void *ap_hack_apr_bucket_file_make = (const void *)apr_bucket_file_make;
const void *ap_hack_apr_bucket_file_enable_mmap = (const void *)apr_bucket_file_enable_mmap;
const void *ap_hack_apr_bucket_file_set_buf_size = (const void *)apr_bucket_file_set_buf_size;

/*
 * /home/wanghan/Workspace/DASICS_ICT/DASICS-DEMO/httpd-apache/httpd-2.4.59/srclib/apr-util/include/apr_crypto.h
 */
#if APU_HAVE_CRYPTO
const void *ap_hack_apr_crypto_init = (const void *)apr_crypto_init;
const void *ap_hack_apr_crypto_clear = (const void *)apr_crypto_clear;
const void *ap_hack_apr_crypto_memzero = (const void *)apr_crypto_memzero;
const void *ap_hack_apr_crypto_equals = (const void *)apr_crypto_equals;
const void *ap_hack_apr_crypto_get_driver = (const void *)apr_crypto_get_driver;
const void *ap_hack_apr_crypto_driver_name = (const void *)apr_crypto_driver_name;
const void *ap_hack_apr_crypto_error = (const void *)apr_crypto_error;
const void *ap_hack_apr_crypto_make = (const void *)apr_crypto_make;
const void *ap_hack_apr_crypto_get_block_key_types = (const void *)apr_crypto_get_block_key_types;
const void *ap_hack_apr_crypto_get_block_key_modes = (const void *)apr_crypto_get_block_key_modes;
const void *ap_hack_apr_crypto_key = (const void *)apr_crypto_key;
const void *ap_hack_apr_crypto_passphrase = (const void *)apr_crypto_passphrase;
const void *ap_hack_apr_crypto_block_encrypt_init = (const void *)apr_crypto_block_encrypt_init;
const void *ap_hack_apr_crypto_block_encrypt = (const void *)apr_crypto_block_encrypt;
const void *ap_hack_apr_crypto_block_encrypt_finish = (const void *)apr_crypto_block_encrypt_finish;
const void *ap_hack_apr_crypto_block_decrypt_init = (const void *)apr_crypto_block_decrypt_init;
const void *ap_hack_apr_crypto_block_decrypt = (const void *)apr_crypto_block_decrypt;
const void *ap_hack_apr_crypto_block_decrypt_finish = (const void *)apr_crypto_block_decrypt_finish;
const void *ap_hack_apr_crypto_block_cleanup = (const void *)apr_crypto_block_cleanup;
const void *ap_hack_apr_crypto_cleanup = (const void *)apr_crypto_cleanup;
const void *ap_hack_apr_crypto_shutdown = (const void *)apr_crypto_shutdown;
#endif /* APU_HAVE_CRYPTO */

/*
 * /home/wanghan/Workspace/DASICS_ICT/DASICS-DEMO/httpd-apache/httpd-2.4.59/srclib/apr-util/include/apr_date.h
 */
const void *ap_hack_apr_date_checkmask = (const void *)apr_date_checkmask;
const void *ap_hack_apr_date_parse_http = (const void *)apr_date_parse_http;
const void *ap_hack_apr_date_parse_rfc = (const void *)apr_date_parse_rfc;

/*
 * /home/wanghan/Workspace/DASICS_ICT/DASICS-DEMO/httpd-apache/httpd-2.4.59/srclib/apr-util/include/apr_dbd.h
 */
const void *ap_hack_apr_dbd_init = (const void *)apr_dbd_init;
const void *ap_hack_apr_dbd_get_driver = (const void *)apr_dbd_get_driver;
const void *ap_hack_apr_dbd_open_ex = (const void *)apr_dbd_open_ex;
const void *ap_hack_apr_dbd_open = (const void *)apr_dbd_open;
const void *ap_hack_apr_dbd_close = (const void *)apr_dbd_close;
const void *ap_hack_apr_dbd_name = (const void *)apr_dbd_name;
const void *ap_hack_apr_dbd_native_handle = (const void *)apr_dbd_native_handle;
const void *ap_hack_apr_dbd_check_conn = (const void *)apr_dbd_check_conn;
const void *ap_hack_apr_dbd_set_dbname = (const void *)apr_dbd_set_dbname;
const void *ap_hack_apr_dbd_transaction_start = (const void *)apr_dbd_transaction_start;
const void *ap_hack_apr_dbd_transaction_end = (const void *)apr_dbd_transaction_end;
const void *ap_hack_apr_dbd_transaction_mode_get = (const void *)apr_dbd_transaction_mode_get;
const void *ap_hack_apr_dbd_transaction_mode_set = (const void *)apr_dbd_transaction_mode_set;
const void *ap_hack_apr_dbd_query = (const void *)apr_dbd_query;
const void *ap_hack_apr_dbd_select = (const void *)apr_dbd_select;
const void *ap_hack_apr_dbd_num_cols = (const void *)apr_dbd_num_cols;
const void *ap_hack_apr_dbd_num_tuples = (const void *)apr_dbd_num_tuples;
const void *ap_hack_apr_dbd_get_row = (const void *)apr_dbd_get_row;
const void *ap_hack_apr_dbd_get_entry = (const void *)apr_dbd_get_entry;
const void *ap_hack_apr_dbd_get_name = (const void *)apr_dbd_get_name;
const void *ap_hack_apr_dbd_error = (const void *)apr_dbd_error;
const void *ap_hack_apr_dbd_escape = (const void *)apr_dbd_escape;
const void *ap_hack_apr_dbd_prepare = (const void *)apr_dbd_prepare;
const void *ap_hack_apr_dbd_pquery = (const void *)apr_dbd_pquery;
const void *ap_hack_apr_dbd_pselect = (const void *)apr_dbd_pselect;
const void *ap_hack_apr_dbd_pvquery = (const void *)apr_dbd_pvquery;
const void *ap_hack_apr_dbd_pvselect = (const void *)apr_dbd_pvselect;
const void *ap_hack_apr_dbd_pbquery = (const void *)apr_dbd_pbquery;
const void *ap_hack_apr_dbd_pbselect = (const void *)apr_dbd_pbselect;
const void *ap_hack_apr_dbd_pvbquery = (const void *)apr_dbd_pvbquery;
const void *ap_hack_apr_dbd_pvbselect = (const void *)apr_dbd_pvbselect;
const void *ap_hack_apr_dbd_datum_get = (const void *)apr_dbd_datum_get;

/*
 * /home/wanghan/Workspace/DASICS_ICT/DASICS-DEMO/httpd-apache/httpd-2.4.59/srclib/apr-util/include/apr_dbm.h
 */
const void *ap_hack_apr_dbm_open_ex = (const void *)apr_dbm_open_ex;
const void *ap_hack_apr_dbm_open = (const void *)apr_dbm_open;
const void *ap_hack_apr_dbm_close = (const void *)apr_dbm_close;
const void *ap_hack_apr_dbm_fetch = (const void *)apr_dbm_fetch;
const void *ap_hack_apr_dbm_store = (const void *)apr_dbm_store;
const void *ap_hack_apr_dbm_delete = (const void *)apr_dbm_delete;
const void *ap_hack_apr_dbm_exists = (const void *)apr_dbm_exists;
const void *ap_hack_apr_dbm_firstkey = (const void *)apr_dbm_firstkey;
const void *ap_hack_apr_dbm_nextkey = (const void *)apr_dbm_nextkey;
const void *ap_hack_apr_dbm_freedatum = (const void *)apr_dbm_freedatum;
const void *ap_hack_apr_dbm_geterror = (const void *)apr_dbm_geterror;
const void *ap_hack_apr_dbm_get_usednames_ex = (const void *)apr_dbm_get_usednames_ex;
const void *ap_hack_apr_dbm_get_usednames = (const void *)apr_dbm_get_usednames;

/*
 * /home/wanghan/Workspace/DASICS_ICT/DASICS-DEMO/httpd-apache/httpd-2.4.59/srclib/apr-util/include/apr_hooks.h
 */
const void *ap_hack_apr_hook_sort_register = (const void *)apr_hook_sort_register;
const void *ap_hack_apr_hook_sort_all = (const void *)apr_hook_sort_all;
const void *ap_hack_apr_hook_debug_show = (const void *)apr_hook_debug_show;
const void *ap_hack_apr_hook_deregister_all = (const void *)apr_hook_deregister_all;

/*
 * /home/wanghan/Workspace/DASICS_ICT/DASICS-DEMO/httpd-apache/httpd-2.4.59/srclib/apr-util/include/apr_ldap_init.h
 */
#if APR_HAS_LDAP
const void *ap_hack_apr_ldap_ssl_init = (const void *)apr_ldap_ssl_init;
const void *ap_hack_apr_ldap_ssl_deinit = (const void *)apr_ldap_ssl_deinit;
const void *ap_hack_apr_ldap_init = (const void *)apr_ldap_init;
const void *ap_hack_apr_ldap_info = (const void *)apr_ldap_info;
#endif /* APR_HAS_LDAP */

/*
 * /home/wanghan/Workspace/DASICS_ICT/DASICS-DEMO/httpd-apache/httpd-2.4.59/srclib/apr-util/include/apr_ldap_option.h
 */
#if APR_HAS_LDAP
const void *ap_hack_apr_ldap_get_option = (const void *)apr_ldap_get_option;
const void *ap_hack_apr_ldap_set_option = (const void *)apr_ldap_set_option;
#endif /* APR_HAS_LDAP */

/*
 * /home/wanghan/Workspace/DASICS_ICT/DASICS-DEMO/httpd-apache/httpd-2.4.59/srclib/apr-util/include/apr_ldap_rebind.h
 */
#if APR_HAS_LDAP
const void *ap_hack_apr_ldap_rebind_init = (const void *)apr_ldap_rebind_init;
const void *ap_hack_apr_ldap_rebind_add = (const void *)apr_ldap_rebind_add;
const void *ap_hack_apr_ldap_rebind_remove = (const void *)apr_ldap_rebind_remove;
#endif /* APR_HAS_LDAP */

/*
 * /home/wanghan/Workspace/DASICS_ICT/DASICS-DEMO/httpd-apache/httpd-2.4.59/srclib/apr-util/include/apr_ldap_url.h
 */
#if APR_HAS_LDAP
const void *ap_hack_apr_ldap_is_ldap_url = (const void *)apr_ldap_is_ldap_url;
const void *ap_hack_apr_ldap_is_ldaps_url = (const void *)apr_ldap_is_ldaps_url;
const void *ap_hack_apr_ldap_is_ldapi_url = (const void *)apr_ldap_is_ldapi_url;
const void *ap_hack_apr_ldap_url_parse_ext = (const void *)apr_ldap_url_parse_ext;
const void *ap_hack_apr_ldap_url_parse = (const void *)apr_ldap_url_parse;
#endif /* APR_HAS_LDAP */

/*
 * /home/wanghan/Workspace/DASICS_ICT/DASICS-DEMO/httpd-apache/httpd-2.4.59/srclib/apr-util/include/apr_md4.h
 */
const void *ap_hack_apr_md4_init = (const void *)apr_md4_init;
#if APR_HAS_XLATE
const void *ap_hack_apr_md4_set_xlate = (const void *)apr_md4_set_xlate;
#else
#endif
const void *ap_hack_apr_md4_update = (const void *)apr_md4_update;
const void *ap_hack_apr_md4_final = (const void *)apr_md4_final;
const void *ap_hack_apr_md4 = (const void *)apr_md4;

/*
 * /home/wanghan/Workspace/DASICS_ICT/DASICS-DEMO/httpd-apache/httpd-2.4.59/srclib/apr-util/include/apr_md5.h
 */
const void *ap_hack_apr_md5_init = (const void *)apr_md5_init;
const void *ap_hack_apr_md5_set_xlate = (const void *)apr_md5_set_xlate;
const void *ap_hack_apr_md5_update = (const void *)apr_md5_update;
const void *ap_hack_apr_md5_final = (const void *)apr_md5_final;
const void *ap_hack_apr_md5 = (const void *)apr_md5;
const void *ap_hack_apr_md5_encode = (const void *)apr_md5_encode;
const void *ap_hack_apr_bcrypt_encode = (const void *)apr_bcrypt_encode;
const void *ap_hack_apr_password_validate = (const void *)apr_password_validate;

/*
 * /home/wanghan/Workspace/DASICS_ICT/DASICS-DEMO/httpd-apache/httpd-2.4.59/srclib/apr-util/include/apr_memcache.h
 */
const void *ap_hack_apr_memcache_hash = (const void *)apr_memcache_hash;
const void *ap_hack_apr_memcache_hash_crc32 = (const void *)apr_memcache_hash_crc32;
const void *ap_hack_apr_memcache_hash_default = (const void *)apr_memcache_hash_default;
const void *ap_hack_apr_memcache_find_server_hash = (const void *)apr_memcache_find_server_hash;
const void *ap_hack_apr_memcache_find_server_hash_default = (const void *)apr_memcache_find_server_hash_default;
const void *ap_hack_apr_memcache_add_server = (const void *)apr_memcache_add_server;
const void *ap_hack_apr_memcache_find_server = (const void *)apr_memcache_find_server;
const void *ap_hack_apr_memcache_enable_server = (const void *)apr_memcache_enable_server;
const void *ap_hack_apr_memcache_disable_server = (const void *)apr_memcache_disable_server;
const void *ap_hack_apr_memcache_server_create = (const void *)apr_memcache_server_create;
const void *ap_hack_apr_memcache_create = (const void *)apr_memcache_create;
const void *ap_hack_apr_memcache_getp = (const void *)apr_memcache_getp;
const void *ap_hack_apr_memcache_add_multget_key = (const void *)apr_memcache_add_multget_key;
const void *ap_hack_apr_memcache_multgetp = (const void *)apr_memcache_multgetp;
const void *ap_hack_apr_memcache_set = (const void *)apr_memcache_set;
const void *ap_hack_apr_memcache_add = (const void *)apr_memcache_add;
const void *ap_hack_apr_memcache_replace = (const void *)apr_memcache_replace;
const void *ap_hack_apr_memcache_delete = (const void *)apr_memcache_delete;
const void *ap_hack_apr_memcache_incr = (const void *)apr_memcache_incr;
const void *ap_hack_apr_memcache_decr = (const void *)apr_memcache_decr;
const void *ap_hack_apr_memcache_version = (const void *)apr_memcache_version;
const void *ap_hack_apr_memcache_stats = (const void *)apr_memcache_stats;

/*
 * /home/wanghan/Workspace/DASICS_ICT/DASICS-DEMO/httpd-apache/httpd-2.4.59/srclib/apr-util/include/apr_optional.h
 */
const void *ap_hack_apr_dynamic_fn_register = (const void *)apr_dynamic_fn_register;
const void *ap_hack_apr_dynamic_fn_retrieve = (const void *)apr_dynamic_fn_retrieve;

/*
 * /home/wanghan/Workspace/DASICS_ICT/DASICS-DEMO/httpd-apache/httpd-2.4.59/srclib/apr-util/include/apr_optional_hooks.h
 */
const void *ap_hack_apr_optional_hook_add = (const void *)apr_optional_hook_add;
const void *ap_hack_apr_optional_hook_get = (const void *)apr_optional_hook_get;

/*
 * /home/wanghan/Workspace/DASICS_ICT/DASICS-DEMO/httpd-apache/httpd-2.4.59/srclib/apr-util/include/apr_queue.h
 */
#if APR_HAS_THREADS
const void *ap_hack_apr_queue_create = (const void *)apr_queue_create;
const void *ap_hack_apr_queue_push = (const void *)apr_queue_push;
const void *ap_hack_apr_queue_pop = (const void *)apr_queue_pop;
const void *ap_hack_apr_queue_trypush = (const void *)apr_queue_trypush;
const void *ap_hack_apr_queue_trypop = (const void *)apr_queue_trypop;
const void *ap_hack_apr_queue_size = (const void *)apr_queue_size;
const void *ap_hack_apr_queue_interrupt_all = (const void *)apr_queue_interrupt_all;
const void *ap_hack_apr_queue_term = (const void *)apr_queue_term;
#endif /* APR_HAS_THREADS */

/*
 * /home/wanghan/Workspace/DASICS_ICT/DASICS-DEMO/httpd-apache/httpd-2.4.59/srclib/apr-util/include/apr_redis.h
 */
const void *ap_hack_apr_redis_hash = (const void *)apr_redis_hash;
const void *ap_hack_apr_redis_hash_crc32 = (const void *)apr_redis_hash_crc32;
const void *ap_hack_apr_redis_hash_default = (const void *)apr_redis_hash_default;
const void *ap_hack_apr_redis_find_server_hash = (const void *)apr_redis_find_server_hash;
const void *ap_hack_apr_redis_find_server_hash_default = (const void *)apr_redis_find_server_hash_default;
const void *ap_hack_apr_redis_add_server = (const void *)apr_redis_add_server;
const void *ap_hack_apr_redis_find_server = (const void *)apr_redis_find_server;
const void *ap_hack_apr_redis_enable_server = (const void *)apr_redis_enable_server;
const void *ap_hack_apr_redis_disable_server = (const void *)apr_redis_disable_server;
const void *ap_hack_apr_redis_server_create = (const void *)apr_redis_server_create;
const void *ap_hack_apr_redis_create = (const void *)apr_redis_create;
const void *ap_hack_apr_redis_getp = (const void *)apr_redis_getp;
const void *ap_hack_apr_redis_set = (const void *)apr_redis_set;
const void *ap_hack_apr_redis_setex = (const void *)apr_redis_setex;
const void *ap_hack_apr_redis_delete = (const void *)apr_redis_delete;
const void *ap_hack_apr_redis_version = (const void *)apr_redis_version;
const void *ap_hack_apr_redis_info = (const void *)apr_redis_info;
const void *ap_hack_apr_redis_incr = (const void *)apr_redis_incr;
const void *ap_hack_apr_redis_decr = (const void *)apr_redis_decr;
const void *ap_hack_apr_redis_ping = (const void *)apr_redis_ping;
const void *ap_hack_apr_redis_multgetp = (const void *)apr_redis_multgetp;
const void *ap_hack_apr_redis_stats = (const void *)apr_redis_stats;

/*
 * /home/wanghan/Workspace/DASICS_ICT/DASICS-DEMO/httpd-apache/httpd-2.4.59/srclib/apr-util/include/apr_reslist.h
 */
const void *ap_hack_apr_reslist_create = (const void *)apr_reslist_create;
const void *ap_hack_apr_reslist_destroy = (const void *)apr_reslist_destroy;
const void *ap_hack_apr_reslist_acquire = (const void *)apr_reslist_acquire;
const void *ap_hack_apr_reslist_release = (const void *)apr_reslist_release;
const void *ap_hack_apr_reslist_timeout_set = (const void *)apr_reslist_timeout_set;
const void *ap_hack_apr_reslist_acquired_count = (const void *)apr_reslist_acquired_count;
const void *ap_hack_apr_reslist_invalidate = (const void *)apr_reslist_invalidate;
const void *ap_hack_apr_reslist_maintain = (const void *)apr_reslist_maintain;
const void *ap_hack_apr_reslist_cleanup_order_set = (const void *)apr_reslist_cleanup_order_set;

/*
 * /home/wanghan/Workspace/DASICS_ICT/DASICS-DEMO/httpd-apache/httpd-2.4.59/srclib/apr-util/include/apr_rmm.h
 */
const void *ap_hack_apr_rmm_init = (const void *)apr_rmm_init;
const void *ap_hack_apr_rmm_destroy = (const void *)apr_rmm_destroy;
const void *ap_hack_apr_rmm_attach = (const void *)apr_rmm_attach;
const void *ap_hack_apr_rmm_detach = (const void *)apr_rmm_detach;
const void *ap_hack_apr_rmm_malloc = (const void *)apr_rmm_malloc;
const void *ap_hack_apr_rmm_realloc = (const void *)apr_rmm_realloc;
const void *ap_hack_apr_rmm_calloc = (const void *)apr_rmm_calloc;
const void *ap_hack_apr_rmm_free = (const void *)apr_rmm_free;
const void *ap_hack_apr_rmm_addr_get = (const void *)apr_rmm_addr_get;
const void *ap_hack_apr_rmm_offset_get = (const void *)apr_rmm_offset_get;
const void *ap_hack_apr_rmm_overhead_get = (const void *)apr_rmm_overhead_get;

/*
 * /home/wanghan/Workspace/DASICS_ICT/DASICS-DEMO/httpd-apache/httpd-2.4.59/srclib/apr-util/include/apr_sdbm.h
 */
const void *ap_hack_apr_sdbm_open = (const void *)apr_sdbm_open;
const void *ap_hack_apr_sdbm_close = (const void *)apr_sdbm_close;
const void *ap_hack_apr_sdbm_lock = (const void *)apr_sdbm_lock;
const void *ap_hack_apr_sdbm_unlock = (const void *)apr_sdbm_unlock;
const void *ap_hack_apr_sdbm_fetch = (const void *)apr_sdbm_fetch;
const void *ap_hack_apr_sdbm_store = (const void *)apr_sdbm_store;
const void *ap_hack_apr_sdbm_delete = (const void *)apr_sdbm_delete;
const void *ap_hack_apr_sdbm_firstkey = (const void *)apr_sdbm_firstkey;
const void *ap_hack_apr_sdbm_nextkey = (const void *)apr_sdbm_nextkey;
const void *ap_hack_apr_sdbm_rdonly = (const void *)apr_sdbm_rdonly;

/*
 * /home/wanghan/Workspace/DASICS_ICT/DASICS-DEMO/httpd-apache/httpd-2.4.59/srclib/apr-util/include/apr_sha1.h
 */
const void *ap_hack_apr_sha1_base64 = (const void *)apr_sha1_base64;
const void *ap_hack_apr_sha1_init = (const void *)apr_sha1_init;
const void *ap_hack_apr_sha1_update = (const void *)apr_sha1_update;
const void *ap_hack_apr_sha1_update_binary = (const void *)apr_sha1_update_binary;
const void *ap_hack_apr_sha1_final = (const void *)apr_sha1_final;

/*
 * /home/wanghan/Workspace/DASICS_ICT/DASICS-DEMO/httpd-apache/httpd-2.4.59/srclib/apr-util/include/apr_siphash.h
 */
const void *ap_hack_apr_siphash = (const void *)apr_siphash;
const void *ap_hack_apr_siphash_auth = (const void *)apr_siphash_auth;
const void *ap_hack_apr_siphash24 = (const void *)apr_siphash24;
const void *ap_hack_apr_siphash24_auth = (const void *)apr_siphash24_auth;
const void *ap_hack_apr_siphash48 = (const void *)apr_siphash48;
const void *ap_hack_apr_siphash48_auth = (const void *)apr_siphash48_auth;

/*
 * /home/wanghan/Workspace/DASICS_ICT/DASICS-DEMO/httpd-apache/httpd-2.4.59/srclib/apr-util/include/apr_strmatch.h
 */
#if defined(DOXYGEN)
const void *ap_hack_apr_strmatch = (const void *)apr_strmatch;
#else
#endif
const void *ap_hack_apr_strmatch_precompile = (const void *)apr_strmatch_precompile;

/*
 * /home/wanghan/Workspace/DASICS_ICT/DASICS-DEMO/httpd-apache/httpd-2.4.59/srclib/apr-util/include/apr_thread_pool.h
 */
#if APR_HAS_THREADS
const void *ap_hack_apr_thread_pool_create = (const void *)apr_thread_pool_create;
const void *ap_hack_apr_thread_pool_destroy = (const void *)apr_thread_pool_destroy;
const void *ap_hack_apr_thread_pool_push = (const void *)apr_thread_pool_push;
const void *ap_hack_apr_thread_pool_schedule = (const void *)apr_thread_pool_schedule;
const void *ap_hack_apr_thread_pool_top = (const void *)apr_thread_pool_top;
const void *ap_hack_apr_thread_pool_tasks_cancel = (const void *)apr_thread_pool_tasks_cancel;
const void *ap_hack_apr_thread_pool_tasks_count = (const void *)apr_thread_pool_tasks_count;
const void *ap_hack_apr_thread_pool_scheduled_tasks_count = (const void *)apr_thread_pool_scheduled_tasks_count;
const void *ap_hack_apr_thread_pool_threads_count = (const void *)apr_thread_pool_threads_count;
const void *ap_hack_apr_thread_pool_busy_count = (const void *)apr_thread_pool_busy_count;
const void *ap_hack_apr_thread_pool_idle_count = (const void *)apr_thread_pool_idle_count;
const void *ap_hack_apr_thread_pool_idle_max_set = (const void *)apr_thread_pool_idle_max_set;
const void *ap_hack_apr_thread_pool_idle_max_get = (const void *)apr_thread_pool_idle_max_get;
const void *ap_hack_apr_thread_pool_thread_max_set = (const void *)apr_thread_pool_thread_max_set;
const void *ap_hack_apr_thread_pool_thread_max_get = (const void *)apr_thread_pool_thread_max_get;
const void *ap_hack_apr_thread_pool_threshold_set = (const void *)apr_thread_pool_threshold_set;
const void *ap_hack_apr_thread_pool_threshold_get = (const void *)apr_thread_pool_threshold_get;
const void *ap_hack_apr_thread_pool_task_owner_get = (const void *)apr_thread_pool_task_owner_get;
#endif /* APR_HAS_THREADS */

/*
 * /home/wanghan/Workspace/DASICS_ICT/DASICS-DEMO/httpd-apache/httpd-2.4.59/srclib/apr-util/include/apr_uri.h
 */
const void *ap_hack_apr_uri_port_of_scheme = (const void *)apr_uri_port_of_scheme;
const void *ap_hack_apr_uri_unparse = (const void *)apr_uri_unparse;
const void *ap_hack_apr_uri_parse = (const void *)apr_uri_parse;
const void *ap_hack_apr_uri_parse_hostinfo = (const void *)apr_uri_parse_hostinfo;

/*
 * /home/wanghan/Workspace/DASICS_ICT/DASICS-DEMO/httpd-apache/httpd-2.4.59/srclib/apr-util/include/apr_uuid.h
 */
const void *ap_hack_apr_uuid_get = (const void *)apr_uuid_get;
const void *ap_hack_apr_uuid_format = (const void *)apr_uuid_format;
const void *ap_hack_apr_uuid_parse = (const void *)apr_uuid_parse;

/*
 * /home/wanghan/Workspace/DASICS_ICT/DASICS-DEMO/httpd-apache/httpd-2.4.59/srclib/apr-util/include/apr_xlate.h
 */
const void *ap_hack_apr_xlate_open = (const void *)apr_xlate_open;
const void *ap_hack_apr_xlate_sb_get = (const void *)apr_xlate_sb_get;
const void *ap_hack_apr_xlate_conv_buffer = (const void *)apr_xlate_conv_buffer;
#ifdef APR_NOT_DONE_YET
const void *ap_hack_apr_xlate_conv_char = (const void *)apr_xlate_conv_char;
#endif
const void *ap_hack_apr_xlate_conv_byte = (const void *)apr_xlate_conv_byte;
const void *ap_hack_apr_xlate_close = (const void *)apr_xlate_close;

/*
 * /home/wanghan/Workspace/DASICS_ICT/DASICS-DEMO/httpd-apache/httpd-2.4.59/srclib/apr-util/include/apr_xml.h
 */
const void *ap_hack_apr_text_append = (const void *)apr_text_append;
const void *ap_hack_apr_xml_parser_create = (const void *)apr_xml_parser_create;
const void *ap_hack_apr_xml_parse_file = (const void *)apr_xml_parse_file;
const void *ap_hack_apr_xml_parser_feed = (const void *)apr_xml_parser_feed;
const void *ap_hack_apr_xml_parser_done = (const void *)apr_xml_parser_done;
const void *ap_hack_apr_xml_parser_geterror = (const void *)apr_xml_parser_geterror;
const void *ap_hack_apr_xml_to_text = (const void *)apr_xml_to_text;
const void *ap_hack_apr_xml_empty_elem = (const void *)apr_xml_empty_elem;
const void *ap_hack_apr_xml_quote_string = (const void *)apr_xml_quote_string;
const void *ap_hack_apr_xml_quote_elem = (const void *)apr_xml_quote_elem;
const void *ap_hack_apr_xml_insert_uri = (const void *)apr_xml_insert_uri;
#if APR_CHARSET_EBCDIC
const void *ap_hack_apr_xml_parser_convert_doc = (const void *)apr_xml_parser_convert_doc;
#endif

/*
 * /home/wanghan/Workspace/DASICS_ICT/DASICS-DEMO/httpd-apache/httpd-2.4.59/srclib/apr-util/include/apu_version.h
 */
#ifndef APU_VERSION_ONLY
const void *ap_hack_apu_version = (const void *)apu_version;
const void *ap_hack_apu_version_string = (const void *)apu_version_string;
#endif /* ndef APU_VERSION_ONLY */

/*
 * /home/wanghan/Workspace/DASICS_ICT/DASICS-DEMO/httpd-apache/httpd-2.4.59/srclib/apr-util/include/private/apr_dbd_internal.h
 */
const void *ap_hack_apr_dbd_mutex_lock = (const void *)apr_dbd_mutex_lock;
const void *ap_hack_apr_dbd_mutex_unlock = (const void *)apr_dbd_mutex_unlock;

/*
 * /home/wanghan/Workspace/DASICS_ICT/DASICS-DEMO/httpd-apache/httpd-2.4.59/srclib/apr-util/include/private/apr_dbm_private.h
 */
const void *ap_hack_apr_posix_perms2mode = (const void *)apr_posix_perms2mode;

