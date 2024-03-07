struct ObjectHitbox MarbleTriggerHitbox = {
    /* interactType:      */ INTERACT_COIN,
    /* downOffset:        */ 0,
    /* damageOrCoinValue: */ 1,
    /* health:            */ 0,
    /* numLootCoins:      */ 0,
    /* radius:            */ 200,
    /* height:            */ 200,
    /* hurtboxRadius:     */ 0,
    /* hurtboxHeight:     */ 0,
};
void bhv_marble_trigger_init(void) {
    obj_set_hitbox(o, &MarbleTriggerHitbox);
}
void bhv_marble_trigger_loop(void) {
    if (obj_check_if_collided_with_object()) {
        save_file_set_flags(SAVE_FLAG_MARBLE);
        print_text(20,20,"hi");
    }
}