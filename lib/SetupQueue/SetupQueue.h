#ifndef SetupQueue_h
#define SetupQueue_h

void setupQueue(void) {
  xQueue_Test = xQueueCreate(4, sizeof(int));
  xQueue_Test2 = xQueueCreate(3, sizeof(long));
}

#endif