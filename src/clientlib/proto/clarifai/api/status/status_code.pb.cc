// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: proto/clarifai/api/status/status_code.proto

#include "proto/clarifai/api/status/status_code.pb.h"

#include <algorithm>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
namespace clarifai {
namespace api {
namespace status {
}  // namespace status
}  // namespace api
}  // namespace clarifai
static constexpr ::PROTOBUF_NAMESPACE_ID::Metadata* file_level_metadata_proto_2fclarifai_2fapi_2fstatus_2fstatus_5fcode_2eproto = nullptr;
static const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* file_level_enum_descriptors_proto_2fclarifai_2fapi_2fstatus_2fstatus_5fcode_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_proto_2fclarifai_2fapi_2fstatus_2fstatus_5fcode_2eproto = nullptr;
const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_proto_2fclarifai_2fapi_2fstatus_2fstatus_5fcode_2eproto::offsets[1] = {};
static constexpr ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema* schemas = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::Message* const* file_default_instances = nullptr;

const char descriptor_table_protodef_proto_2fclarifai_2fapi_2fstatus_2fstatus_5fcode_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n+proto/clarifai/api/status/status_code."
  "proto\022\023clarifai.api.status*\256\?\n\nStatusCod"
  "e\022\010\n\004ZERO\020\000\022\014\n\007SUCCESS\020\220N\022\021\n\014MIXED_STATU"
  "S\020\232N\022\014\n\007FAILURE\020\244N\022\016\n\tTRY_AGAIN\020\256N\022\024\n\017NO"
  "T_IMPLEMENTED\020\270N\022\030\n\023CONN_ACCOUNT_ISSUES\020"
  "\370U\022\027\n\022CONN_TOKEN_INVALID\020\371U\022\035\n\030CONN_CRED"
  "ENTIALS_INVALID\020\372U\022\035\n\030CONN_EXCEED_HOURLY"
  "_LIMIT\020\373U\022\036\n\031CONN_EXCEED_MONTHLY_LIMIT\020\374"
  "U\022\023\n\016CONN_THROTTLED\020\375U\022\030\n\023CONN_EXCEEDS_L"
  "IMITS\020\376U\022\035\n\030CONN_INSUFFICIENT_SCOPES\020\377U\022"
  "\025\n\020CONN_KEY_INVALID\020\200V\022\027\n\022CONN_KEY_NOT_F"
  "OUND\020\201V\022\034\n\027CONN_BAD_REQUEST_FORMAT\020\334V\022\030\n"
  "\023CONN_DOES_NOT_EXIST\020\335V\022\031\n\024CONN_INVALID_"
  "REQUEST\020\336V\022\034\n\027CONN_METHOD_NOT_ALLOWED\020\337V"
  "\022\031\n\024CONN_NO_GDPR_CONSENT\020\340V\022\036\n\031CONN_AUTH"
  "_METHOD_DISABLED\020\300W\022\023\n\rMODEL_TRAINED\020\354\244\001"
  "\022\024\n\016MODEL_TRAINING\020\355\244\001\022\025\n\017MODEL_UNTRAINE"
  "D\020\356\244\001\022\037\n\031MODEL_QUEUED_FOR_TRAINING\020\357\244\001\022\034"
  "\n\026MODEL_TRAINING_NO_DATA\020\366\244\001\022!\n\033MODEL_TR"
  "AINING_NO_POSITIVES\020\367\244\001\022*\n$MODEL_TRAININ"
  "G_ONE_VS_N_SINGLE_CLASS\020\370\244\001\022\036\n\030MODEL_TRA"
  "INING_TIMED_OUT\020\371\244\001\022\"\n\034MODEL_TRAINING_WA"
  "ITING_ERROR\020\372\244\001\022\"\n\034MODEL_TRAINING_UNKNOW"
  "N_ERROR\020\373\244\001\022\"\n\034MODEL_TRAINING_MSG_REDELI"
  "VER\020\374\244\001\022&\n MODEL_TRAINING_INSUFFICIENT_D"
  "ATA\020\375\244\001\022#\n\035MODEL_TRAINING_INVALID_PARAMS"
  "\020\376\244\001\0224\n.MODEL_TRAINING_INVALID_DATA_TOLE"
  "RANCE_EXCEEDED\020\377\244\001\022\032\n\024MODEL_MODIFY_SUCCE"
  "SS\020\236\245\001\022\032\n\024MODEL_MODIFY_PENDING\020\237\245\001\022\031\n\023MO"
  "DEL_MODIFY_FAILED\020\240\245\001\022\032\n\024MODEL_DOES_NOT_"
  "EXIST\020\320\245\001\022\035\n\027MODEL_PERMISSION_DENIED\020\321\245\001"
  "\022\034\n\026MODEL_INVALID_ARGUMENT\020\322\245\001\022\033\n\025MODEL_"
  "INVALID_REQUEST\020\323\245\001\022\025\n\017MODEL_EVALUATED\020\264"
  "\246\001\022\026\n\020MODEL_EVALUATING\020\265\246\001\022\031\n\023MODEL_NOT_"
  "EVALUATED\020\266\246\001\022!\n\033MODEL_QUEUED_FOR_EVALUA"
  "TION\020\267\246\001\022 \n\032MODEL_EVALUATION_TIMED_OUT\020\276"
  "\246\001\022$\n\036MODEL_EVALUATION_WAITING_ERROR\020\277\246\001"
  "\022$\n\036MODEL_EVALUATION_UNKNOWN_ERROR\020\300\246\001\022\035"
  "\n\027MODEL_PREDICTION_FAILED\020\301\246\001\022$\n\036MODEL_E"
  "VALUATION_MSG_REDELIVER\020\302\246\001\022\"\n\034MODEL_EVA"
  "LUATION_NEED_LABELS\020\303\246\001\022\"\n\034MODEL_EVALUAT"
  "ION_NEED_INPUTS\020\304\246\001\022\035\n\027MODEL_DEPLOYMENT_"
  "FAILED\020\346\246\001\022\025\n\017MODEL_DEPLOYING\020\347\246\001\022!\n\033MOD"
  "EL_QUEUED_FOR_DEPLOYMENT\020\350\246\001\022\030\n\022MODEL_NO"
  "T_DEPLOYED\020\351\246\001\022 \n\032WORKFLOW_NO_MATCHING_I"
  "NPUT\020\361\253\001\022$\n\036WORKFLOW_REQUIRE_TRAINED_MOD"
  "EL\020\362\253\001\022\030\n\022WORKFLOW_DUPLICATE\020\324\254\001\022!\n\033WORK"
  "FLOW_UNSUPPORTED_FORMAT\020\325\254\001\022\035\n\027WORKFLOW_"
  "DOES_NOT_EXIST\020\326\254\001\022 \n\032WORKFLOW_PERMISSIO"
  "N_DENIED\020\327\254\001\022\037\n\031WORKFLOW_INVALID_ARGUMEN"
  "T\020\330\254\001\022\035\n\027WORKFLOW_INVALID_RECIPE\020\331\254\001\022\037\n\031"
  "WORKFLOW_INVALID_TEMPLATE\020\332\254\001\022\034\n\026WORKFLO"
  "W_INVALID_GRAPH\020\333\254\001\022\037\n\031WORKFLOW_INTERNAL"
  "_FAILURE\020\334\254\001\022\036\n\030WORKFLOW_INVALID_REQUEST"
  "\020\327\263\001\022\035\n\027WORKFLOW_MODIFY_SUCCESS\020\206\255\001\022\035\n\027W"
  "ORKFLOW_MODIFY_PENDING\020\207\255\001\022\034\n\026WORKFLOW_M"
  "ODIFY_FAILED\020\210\255\001\022\035\n\027WORKFLOW_REINDEX_FAI"
  "LED\020\211\255\001\022\034\n\026CONCEPT_MODIFY_SUCCESS\020\356\264\001\022\034\n"
  "\026CONCEPT_MODIFY_PENDING\020\357\264\001\022\033\n\025CONCEPT_M"
  "ODIFY_FAILED\020\360\264\001\022\030\n\022ANNOTATION_SUCCESS\020\326"
  "\274\001\022\030\n\022ANNOTATION_PENDING\020\327\274\001\022\027\n\021ANNOTATI"
  "ON_FAILED\020\330\274\001\022\037\n\031ANNOTATION_UNKNOWN_STAT"
  "US\020\332\274\001\022!\n\033ANNOTATION_INVALID_ARGUMENT\020\333\274"
  "\001\022\"\n\034ANNOTATION_PERMISSION_DENIED\020\334\274\001\022 \n"
  "\032ANNOTATION_AWAITING_REVIEW\020\335\274\001\022\036\n\030ANNOT"
  "ATION_REVIEW_DENIED\020\336\274\001\022\037\n\031ANNOTATION_MO"
  "DIFY_SUCCESS\020\272\275\001\022\037\n\031ANNOTATION_MODIFY_PE"
  "NDING\020\273\275\001\022\036\n\030ANNOTATION_MODIFY_FAILED\020\274\275"
  "\001\022&\n METADATA_INVALID_PATCH_ARGUMENTS\020\304\302"
  "\001\022\034\n\026METADATA_PARSING_ISSUE\020\305\302\001\022!\n\033METAD"
  "ATA_MANIPULATION_ISSUE\020\306\302\001\022\034\n\026TRAINER_JO"
  "B_STATE_NONE\020\250\303\001\022\036\n\030TRAINER_JOB_STATE_QU"
  "EUED\020\251\303\001\022\037\n\031TRAINER_JOB_STATE_RUNNING\020\252\303"
  "\001\022 \n\032TRAINER_JOB_STATE_COMPLETE\020\253\303\001\022\035\n\027T"
  "RAINER_JOB_STATE_ERROR\020\254\303\001\022\027\n\021DATA_DUMP_"
  "SUCCESS\020\276\304\001\022\027\n\021DATA_DUMP_PENDING\020\277\304\001\022\026\n\020"
  "DATA_DUMP_FAILED\020\300\304\001\022\033\n\025DATA_DUMP_IN_PRO"
  "GRESS\020\301\304\001\022\035\n\027APP_DUPLICATION_SUCCESS\020\360\304\001"
  "\022\034\n\026APP_DUPLICATION_FAILED\020\361\304\001\022\035\n\027APP_DU"
  "PLICATION_PENDING\020\362\304\001\022!\n\033APP_DUPLICATION"
  "_IN_PROGRESS\020\363\304\001\022%\n\037APP_DUPLICATION_INVA"
  "LID_REQUEST\020\364\304\001\022\034\n\026INPUT_DOWNLOAD_SUCCES"
  "S\020\260\352\001\022\034\n\026INPUT_DOWNLOAD_PENDING\020\261\352\001\022\033\n\025I"
  "NPUT_DOWNLOAD_FAILED\020\262\352\001\022 \n\032INPUT_DOWNLO"
  "AD_IN_PROGRESS\020\263\352\001\022 \n\032INPUT_STATUS_UPDAT"
  "E_FAILED\020\264\352\001\022\031\n\023INPUT_DELETE_FAILED\020\265\352\001\022"
  "\025\n\017INPUT_DUPLICATE\020\224\353\001\022\036\n\030INPUT_UNSUPPOR"
  "TED_FORMAT\020\225\353\001\022\032\n\024INPUT_DOES_NOT_EXIST\020\226"
  "\353\001\022\035\n\027INPUT_PERMISSION_DENIED\020\227\353\001\022\034\n\026INP"
  "UT_INVALID_ARGUMENT\020\230\353\001\022\026\n\020INPUT_OVER_LI"
  "MIT\020\231\353\001\022\027\n\021INPUT_INVALID_URL\020\232\353\001\022\032\n\024INPU"
  "T_MODIFY_SUCCESS\020\370\353\001\022\032\n\024INPUT_MODIFY_PEN"
  "DING\020\371\353\001\022\031\n\023INPUT_MODIFY_FAILED\020\373\353\001\022\037\n\031I"
  "NPUT_STORAGE_HOST_FAILED\020\202\354\001\022\035\n\027ALL_INPU"
  "T_INVALID_BYTES\020\334\354\001\022\033\n\025INPUT_CLUSTER_SUC"
  "CESS\020\300\355\001\022\033\n\025INPUT_CLUSTER_PENDING\020\301\355\001\022\032\n"
  "\024INPUT_CLUSTER_FAILED\020\302\355\001\022\037\n\031INPUT_CLUST"
  "ER_IN_PROGRESS\020\303\355\001\022\033\n\025INPUT_REINDEX_SUCC"
  "ESS\020\244\356\001\022\033\n\025INPUT_REINDEX_PENDING\020\245\356\001\022\032\n\024"
  "INPUT_REINDEX_FAILED\020\246\356\001\022\037\n\031INPUT_REINDE"
  "X_IN_PROGRESS\020\247\356\001\022\"\n\034INPUT_VIDEO_DOWNLOA"
  "D_SUCCESS\020\230\362\001\022\"\n\034INPUT_VIDEO_DOWNLOAD_PE"
  "NDING\020\231\362\001\022!\n\033INPUT_VIDEO_DOWNLOAD_FAILED"
  "\020\232\362\001\022\033\n\025INPUT_VIDEO_DUPLICATE\020\374\362\001\022$\n\036INP"
  "UT_VIDEO_UNSUPPORTED_FORMAT\020\375\362\001\022 \n\032INPUT"
  "_VIDEO_DOES_NOT_EXIST\020\376\362\001\022#\n\035INPUT_VIDEO"
  "_PERMISSION_DENIED\020\377\362\001\022\"\n\034INPUT_VIDEO_IN"
  "VALID_ARGUMENT\020\200\363\001\022\034\n\026INPUT_VIDEO_OVER_L"
  "IMIT\020\201\363\001\022\035\n\027INPUT_VIDEO_INVALID_URL\020\202\363\001\022"
  " \n\032INPUT_VIDEO_MODIFY_SUCCESS\020\340\363\001\022 \n\032INP"
  "UT_VIDEO_MODIFY_PENDING\020\341\363\001\022\037\n\031INPUT_VID"
  "EO_MODIFY_FAILED\020\343\363\001\022%\n\037INPUT_VIDEO_STOR"
  "AGE_HOST_FAILED\020\352\363\001\022$\n\036ALL_INPUT_VIDEOS_"
  "INVALID_BYTES\020\304\364\001\022\035\n\027INPUT_CONNECTION_FA"
  "ILED\020\274\270\002\022&\n REQUEST_DISABLED_FOR_MAINTEN"
  "ANCE\020\275\270\002\022+\n%INPUT_WRITES_DISABLED_FOR_MA"
  "INTENANCE\020\276\270\002\022\033\n\025INPUT_INVALID_REQUEST\020\277"
  "\270\002\022\035\n\027PREDICT_INVALID_REQUEST\020\301\270\002\022\034\n\026SEA"
  "RCH_INVALID_REQUEST\020\302\270\002\022\036\n\030CONCEPTS_INVA"
  "LID_REQUEST\020\303\270\002\022\033\n\025STATS_INVALID_REQUEST"
  "\020\304\270\002\022\034\n\026DATABASE_DUPLICATE_KEY\020\312\270\002\022 \n\032DA"
  "TABASE_STATEMENT_TIMEOUT\020\313\270\002\022$\n\036DATABASE"
  "_INVALID_ROWS_AFFECTED\020\314\270\002\022 \n\032DATABASE_D"
  "EADLOCK_DETECTED\020\315\270\002\022\030\n\022DATABASE_FAIL_TA"
  "SK\020\316\270\002\022&\n DATABASE_FAIL_TO_GET_CONNECTIO"
  "NS\020\317\270\002\022\037\n\031DATABASE_TOO_MANY_CLIENTS\020\320\270\002\022"
  "\"\n\034DATABASE_CONSTRAINT_VIOLATED\020\321\270\002\022$\n\036D"
  "ATABASE_NO_ONGOING_OPERATIONS\020\322\270\002\022*\n$DAT"
  "ABASE_LOCKED_BY_ONGOING_OPERATION\020\323\270\002\022\037\n"
  "\031ASYNC_WORKER_MULTI_ERRORS\020\324\270\002\022\034\n\026RPC_RE"
  "QUEST_QUEUE_FULL\020\336\270\002\022\034\n\026RPC_SERVER_UNAVA"
  "ILABLE\020\337\270\002\022\031\n\023RPC_REQUEST_TIMEOUT\020\340\270\002\022#\n"
  "\035RPC_MAX_MESSAGE_SIZE_EXCEEDED\020\341\270\002\022\022\n\014RP"
  "C_CANCELED\020\343\270\002\022\036\n\030CLUSTER_INTERNAL_FAILU"
  "RE\020\240\320\002\022\037\n\031EXTERNAL_CONNECTION_ERROR\020\342\270\002\022"
  "\026\n\020QUEUE_CONN_ERROR\020\250\300\002\022!\n\033QUEUE_CLOSE_R"
  "EQUEST_TIMEOUT\020\252\300\002\022\027\n\021QUEUE_CONN_CLOSED\020"
  "\253\300\002\022\037\n\031QUEUE_PUBLISH_ACK_TIMEOUT\020\254\300\002\022\031\n\023"
  "QUEUE_PUBLISH_ERROR\020\255\300\002\022 \n\032QUEUE_SUBSCRI"
  "PTION_TIMEOUT\020\256\300\002\022\036\n\030QUEUE_SUBSCRIPTION_"
  "ERROR\020\257\300\002\022\036\n\030QUEUE_MARSHALLING_FAILED\020\260\300"
  "\002\022 \n\032QUEUE_UNMARSHALLING_FAILED\020\261\300\002\022\'\n!Q"
  "UEUE_MAX_MSG_REDELIVERY_EXCEEDED\020\262\300\002\022\027\n\021"
  "QUEUE_ACK_FAILURE\020\263\300\002\022\023\n\rSQS_OVERLIMIT\020\214"
  "\301\002\022 \n\032SQS_INVALID_RECEIPT_HANDLE\020\215\301\002\022\021\n\013"
  "SQS_UNKNOWN\020\216\301\002\022\022\n\014KAFKA_UNKNOW\020\360\301\002\022\031\n\023K"
  "AFKA_MISSING_TOPIC\020\361\301\002\022\025\n\017KAFKA_ADMIN_ER"
  "R\020\362\301\002\022\030\n\022KAFKA_CONSUMER_ERR\020\363\301\002\022\031\n\023KAFKA"
  "_PUBLISHER_ERR\020\364\301\002\022\035\n\027SEARCH_INTERNAL_FA"
  "ILURE\020\371\317\002\022\037\n\031SEARCH_PROJECTION_FAILURE\020\372"
  "\317\002\022\037\n\031SEARCH_PREDICTION_FAILURE\020\373\317\002\022\'\n!S"
  "EARCH_BY_NOT_FULLY_INDEXED_INPUT\020\374\317\002\022 \n\032"
  "SAVED_SEARCH_MODIFY_FAILED\020\375\317\002\0225\n/ANNOTA"
  "TION_SEARCH_METRICS_QUEUED_FOR_EVALUATIO"
  "N\020\334\320\002\022*\n$ANNOTATION_SEARCH_METRICS_EVALU"
  "ATING\020\335\320\002\022)\n#ANNOTATION_SEARCH_METRICS_E"
  "VALUATED\020\336\320\002\0227\n1ANNOTATION_SEARCH_METRIC"
  "S_FAILED_TO_RETRIEVE_DATA\020\337\320\002\0220\n*ANNOTAT"
  "ION_SEARCH_METRICS_INVALID_ARGUMENT\020\340\320\002\022"
  "&\n ANNOTATION_SEARCH_METRICS_FAILED\020\341\320\002\022"
  "\030\n\022STRIPE_EVENT_ERROR\020\341\327\002\022\020\n\nCACHE_MISS\020"
  "\311\337\002\022&\n REDIS_SCRIPT_EXITED_WITH_FAILURE\020"
  "\312\337\002\022\030\n\022SIGNUP_EVENT_ERROR\020\261\347\002\022\024\n\016SIGNUP_"
  "FLAGGED\020\262\347\002\022\032\n\024FILETYPE_UNSUPPORTED\020\263\347\002\022"
  "\037\n\031APP_COUNT_INVALID_MESSAGE\020\231\357\002\022\'\n!APP_"
  "COUNT_UPDATE_INCREMENT_FAILED\020\232\357\002\022\036\n\030APP"
  "_COUNT_REBUILD_FAILED\020\233\357\002\022 \n\032APP_COUNT_I"
  "NTERNAL_FAILURE\020\234\357\002\022\027\n\021MP_DOWNLOAD_ERROR"
  "\020\375\357\002\022\032\n\024MP_RESOLVE_DNS_ERROR\020\376\357\002\022)\n#MP_D"
  "OWNLOAD_MAX_SIZE_EXCEEDED_ERROR\020\377\357\002\022\033\n\025M"
  "P_IMAGE_DECODE_ERROR\020\200\360\002\022\031\n\023MP_INVALID_A"
  "RGUMENT\020\201\360\002\022\037\n\031MP_IMAGE_PROCESSING_ERROR"
  "\020\202\360\002\022\027\n\021USER_CONSENT_FACE\020\321\206\003\022\024\n\016WORKER_"
  "MISSING\020\270\216\003\022\023\n\rWORKER_ACTIVE\020\271\216\003\022\025\n\017WORK"
  "ER_INACTIVE\020\272\216\003\022\027\n\021COLLECTOR_MISSING\020\240\226\003"
  "\022\026\n\020COLLECTOR_ACTIVE\020\241\226\003\022\030\n\022COLLECTOR_IN"
  "ACTIVE\020\242\226\003\022*\n$SSO_IDENTITY_PROVIDER_DOES"
  "_NOT_EXIST\020\211\236\003\022\026\n\020TASK_IN_PROGRESS\020\361\245\003\022\017"
  "\n\tTASK_DONE\020\362\245\003\022\024\n\016LICENSE_ACTIVE\020\340\324\003\022\034\n"
  "\026LICENSE_DOES_NOT_EXIST\020\341\324\003\022\031\n\023LICENSE_N"
  "EED_UPDATE\020\342\324\003\022\025\n\017LICENSE_EXPIRED\020\343\324\003\022\025\n"
  "\017LICENSE_REVOKED\020\344\324\003\022\025\n\017LICENSE_DELETED\020"
  "\345\324\003\022\035\n\027LICENSE_VOLUME_EXCEEDED\020\346\324\003\022!\n\033PA"
  "SSWORD_VALIDATION_SUCCESS\020\310\334\003\022 \n\032PASSWOR"
  "D_VALIDATION_FAILED\020\311\334\003\022%\n\037PASSWORDPOLIC"
  "Y_INVALID_ARGUMENT\020\312\334\003\022\033\n\025INTERNAL_SERVE"
  "R_ISSUE\020\324\375\005\022\035\n\027INTERNAL_FETCHING_ISSUE\020\325"
  "\375\005\022\035\n\027INTERNAL_DATABASE_ISSUE\020\326\375\005\022!\n\033INT"
  "ERNAL_UNEXPECTED_TIMEOUT\020\331\375\005\022\034\n\026INTERNAL"
  "_UNEXPECTED_V1\020\332\375\005\022\037\n\031INTERNAL_UNEXPECTE"
  "D_PANIC\020\333\375\005\022\037\n\031INTERNAL_UNEXPECTED_SPIRE"
  "\020\334\375\005\022 \n\032INTERNAL_REDIS_UNAVAILABLE\020\335\375\005\022!"
  "\n\033INTERNAL_RESOURCE_EXHAUSTED\020\336\375\005\022\"\n\034INT"
  "ERNAL_REDIS_UNCATEGORIZED\020\337\375\005\022 \n\032INTERNA"
  "L_AWS_UNCATEGORIZED\020\340\375\005\022\"\n\034INTERNAL_AZUR"
  "E_UNCATEGORIZED\020\341\375\005\022\030\n\022CONN_UNCATEGORIZE"
  "D\020\271\205\006\022\031\n\023MODEL_UNCATEGORIZED\020\272\205\006\022\031\n\023INPU"
  "T_UNCATEGORIZED\020\273\205\006\022\036\n\030ANNOTATION_UNCATE"
  "GORIZED\020\274\205\006\022\033\n\025BILLING_UNCATEGORIZED\020\275\205\006"
  "\022\034\n\026INTERNAL_UNCATEGORIZED\020\301\205\006\022\021\n\013BAD_RE"
  "QUEST\020\240\302\005\022\022\n\014SERVER_ERROR\020\204\303\005\"\010\010\350\201\002\020\350\201\002\""
  "\010\010\351\201\002\020\351\201\002\"\010\010\352\201\002\020\352\201\002\"\010\010\314\202\002\020\314\202\002\"\010\010\315\202\002\020\315\202\002\""
  "\010\010\316\202\002\020\316\202\002\"\010\010\317\202\002\020\317\202\002\"\010\010\320\202\002\020\320\202\002\"\010\010\321\202\002\020\321\202\002\""
  "\010\010\322\202\002\020\322\202\002\"\010\010\260\203\002\020\260\203\002\"\010\010\261\203\002\020\261\203\002\"\010\010\263\203\002\020\263\203\002\""
  "\010\010\272\203\002\020\272\203\002\"\010\010\273\270\002\020\273\270\002B/\n\034com.clarifai.grpc"
  ".api.statusP\001Z\006status\242\002\004CAIPb\006proto3"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_proto_2fclarifai_2fapi_2fstatus_2fstatus_5fcode_2eproto_deps[1] = {
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_proto_2fclarifai_2fapi_2fstatus_2fstatus_5fcode_2eproto_sccs[1] = {
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_proto_2fclarifai_2fapi_2fstatus_2fstatus_5fcode_2eproto_once;
static bool descriptor_table_proto_2fclarifai_2fapi_2fstatus_2fstatus_5fcode_2eproto_initialized = false;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_proto_2fclarifai_2fapi_2fstatus_2fstatus_5fcode_2eproto = {
  &descriptor_table_proto_2fclarifai_2fapi_2fstatus_2fstatus_5fcode_2eproto_initialized, descriptor_table_protodef_proto_2fclarifai_2fapi_2fstatus_2fstatus_5fcode_2eproto, "proto/clarifai/api/status/status_code.proto", 8236,
  &descriptor_table_proto_2fclarifai_2fapi_2fstatus_2fstatus_5fcode_2eproto_once, descriptor_table_proto_2fclarifai_2fapi_2fstatus_2fstatus_5fcode_2eproto_sccs, descriptor_table_proto_2fclarifai_2fapi_2fstatus_2fstatus_5fcode_2eproto_deps, 0, 0,
  schemas, file_default_instances, TableStruct_proto_2fclarifai_2fapi_2fstatus_2fstatus_5fcode_2eproto::offsets,
  file_level_metadata_proto_2fclarifai_2fapi_2fstatus_2fstatus_5fcode_2eproto, 0, file_level_enum_descriptors_proto_2fclarifai_2fapi_2fstatus_2fstatus_5fcode_2eproto, file_level_service_descriptors_proto_2fclarifai_2fapi_2fstatus_2fstatus_5fcode_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_proto_2fclarifai_2fapi_2fstatus_2fstatus_5fcode_2eproto = (  ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_proto_2fclarifai_2fapi_2fstatus_2fstatus_5fcode_2eproto), true);
namespace clarifai {
namespace api {
namespace status {
const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* StatusCode_descriptor() {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_proto_2fclarifai_2fapi_2fstatus_2fstatus_5fcode_2eproto);
  return file_level_enum_descriptors_proto_2fclarifai_2fapi_2fstatus_2fstatus_5fcode_2eproto[0];
}
bool StatusCode_IsValid(int value) {
  switch (value) {
    case 0:
    case 10000:
    case 10010:
    case 10020:
    case 10030:
    case 10040:
    case 11000:
    case 11001:
    case 11002:
    case 11003:
    case 11004:
    case 11005:
    case 11006:
    case 11007:
    case 11008:
    case 11009:
    case 11100:
    case 11101:
    case 11102:
    case 11103:
    case 11104:
    case 11200:
    case 21100:
    case 21101:
    case 21102:
    case 21103:
    case 21110:
    case 21111:
    case 21112:
    case 21113:
    case 21114:
    case 21115:
    case 21116:
    case 21117:
    case 21118:
    case 21119:
    case 21150:
    case 21151:
    case 21152:
    case 21200:
    case 21201:
    case 21202:
    case 21203:
    case 21300:
    case 21301:
    case 21302:
    case 21303:
    case 21310:
    case 21311:
    case 21312:
    case 21313:
    case 21314:
    case 21315:
    case 21316:
    case 21350:
    case 21351:
    case 21352:
    case 21353:
    case 22001:
    case 22002:
    case 22100:
    case 22101:
    case 22102:
    case 22103:
    case 22104:
    case 22105:
    case 22106:
    case 22107:
    case 22108:
    case 22150:
    case 22151:
    case 22152:
    case 22153:
    case 22999:
    case 23150:
    case 23151:
    case 23152:
    case 24150:
    case 24151:
    case 24152:
    case 24154:
    case 24155:
    case 24156:
    case 24157:
    case 24158:
    case 24250:
    case 24251:
    case 24252:
    case 24900:
    case 24901:
    case 24902:
    case 25000:
    case 25001:
    case 25002:
    case 25003:
    case 25004:
    case 25150:
    case 25151:
    case 25152:
    case 25153:
    case 25200:
    case 25201:
    case 25202:
    case 25203:
    case 25204:
    case 30000:
    case 30001:
    case 30002:
    case 30003:
    case 30004:
    case 30005:
    case 30100:
    case 30101:
    case 30102:
    case 30103:
    case 30104:
    case 30105:
    case 30106:
    case 30200:
    case 30201:
    case 30203:
    case 30210:
    case 30300:
    case 30400:
    case 30401:
    case 30402:
    case 30403:
    case 30500:
    case 30501:
    case 30502:
    case 30503:
    case 31000:
    case 31001:
    case 31002:
    case 31100:
    case 31101:
    case 31102:
    case 31103:
    case 31104:
    case 31105:
    case 31106:
    case 31200:
    case 31201:
    case 31203:
    case 31210:
    case 31300:
    case 39996:
    case 39997:
    case 39998:
    case 39999:
    case 40001:
    case 40002:
    case 40003:
    case 40004:
    case 40010:
    case 40011:
    case 40012:
    case 40013:
    case 40014:
    case 40015:
    case 40016:
    case 40017:
    case 40018:
    case 40019:
    case 40020:
    case 40030:
    case 40031:
    case 40032:
    case 40033:
    case 40034:
    case 40035:
    case 41000:
    case 41002:
    case 41003:
    case 41004:
    case 41005:
    case 41006:
    case 41007:
    case 41008:
    case 41009:
    case 41010:
    case 41011:
    case 41100:
    case 41101:
    case 41102:
    case 41200:
    case 41201:
    case 41202:
    case 41203:
    case 41204:
    case 43001:
    case 43002:
    case 43003:
    case 43004:
    case 43005:
    case 43040:
    case 43100:
    case 43101:
    case 43102:
    case 43103:
    case 43104:
    case 43105:
    case 44001:
    case 45001:
    case 45002:
    case 46001:
    case 46002:
    case 46003:
    case 47001:
    case 47002:
    case 47003:
    case 47004:
    case 47101:
    case 47102:
    case 47103:
    case 47104:
    case 47105:
    case 47106:
    case 50001:
    case 51000:
    case 51001:
    case 51002:
    case 52000:
    case 52001:
    case 52002:
    case 53001:
    case 54001:
    case 54002:
    case 60000:
    case 60001:
    case 60002:
    case 60003:
    case 60004:
    case 60005:
    case 60006:
    case 61000:
    case 61001:
    case 61002:
    case 90400:
    case 90500:
    case 98004:
    case 98005:
    case 98006:
    case 98009:
    case 98010:
    case 98011:
    case 98012:
    case 98013:
    case 98014:
    case 98015:
    case 98016:
    case 98017:
    case 99001:
    case 99002:
    case 99003:
    case 99004:
    case 99005:
    case 99009:
      return true;
    default:
      return false;
  }
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace status
}  // namespace api
}  // namespace clarifai
PROTOBUF_NAMESPACE_OPEN
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
