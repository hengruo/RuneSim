//
// Created by Hengruo Zhang on 4/19/20.
//

#include "event_listener.h"
#include "game.h"

RSID EventListener::getId() const {
  return content->listenerId;
}
void EventListener::setId(RSID ListenerId) {
  content->listenerId = ListenerId;
}
EventType EventListener::getType() const {
  return content->type;
}
void EventListener::setType(EventType Type) {
  content->type = Type;
}
void EventListener::setListener(RSID lid, function<void(RSID, Event)> Func) {
  content->func = Func;
}
void EventListener::operator()(Event event) {
  content->func(content->listenerId, event);
}
EventListener::EventListener() {}
EventListener::EventListener(RSID ListenerId, EventType Type){
  content = make_shared<EventListenerImpl>();
  content->listenerId = ListenerId;
  content->type = Type;
  memset(content->data, 0, sizeof(content->data));
  data = content->data;
}
EventListener EventListener::buildAndReg(RSID ListenerId, EventType Type) {
  EventListener el(ListenerId, Type);
  GAME_PTR->evlsnr[ListenerId] = el;
  GAME_PTR->elByType[Type].insert(ListenerId);
}
