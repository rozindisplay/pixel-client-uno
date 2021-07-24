#ifndef PIXEL_CLIENT_CONSTS
#define PIXEL_CLIENT_CONSTS

#define OP_INIT 0
#define OP_HOME 1
#define OP_CLEAR_ERROR_CODE 2
#define OP_SET_LIMIT 3
#define OP_SET_STEPS 4
#define OP_ADD_STEPS 5
#define OP_SET_ANGLE 6
#define OP_ADD_ANGLE 7
#define OP_REQUEST_TYPE 8

#define REQUEST_PING 0
#define REQUEST_ERROR_CODE 1
#define REQUEST_MOVING_COUNT 2
#define REQUEST_STATUS 3

#define ERROR_NONE 0
#define ERROR_UNKNOWN 1
#define ERROR_REQUEST_WRONG_NUMBER_OF_BYTES 101
#define ERROR_REQUEST_WRONG_TYPE 102
#define ERROR_READER_DATA_NOT_AVAILABLE 201
#define ERROR_READER_UNKNOWN_COMMAND 202
#define ERROR_READER_UNKNOWN_REQUEST 202
#define ERROR_WIRE_FAILED_TO_WRITE 301
#define ERROR_WIRE_FAILED_TO_READ 302
#define ERROR_WIRE_LENGTH_TO_LONG_FOR_BUFFER 303
#define ERROR_WIRE_ADDRESS_SEND_NACK_RECEIVED 304
#define ERROR_WIRE_DATA_SEND_NACK_RECEIVED 305
#define ERROR_WIRE_OTHER_TWI_ERROR 306
#define ERROR_WIRE_OTHER_TIMEOUT 307

#endif

