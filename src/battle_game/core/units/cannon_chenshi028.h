#pragma once
#include "battle_game/core/unit.h"

namespace battle_game::unit {
class Cannon_chenshi028 : public Unit {
 public:
  Cannon_chenshi028(GameCore *game_core, uint32_t id, uint32_t player_id);
  void Render() override;
  void Update() override;
  [[nodiscard]] bool IsHit(glm::vec2 position) const override;

 protected:
  void CannonMove(float move_speed, float rotate_angular_speed);
  void Fire();
  void Shield();
  [[nodiscard]] const char *UnitName() const override;
  [[nodiscard]] const char *Author() const override;

  float turret_rotation_{0.0f};
  uint32_t fire_count_down_{0};
  uint32_t mine_count_down_{0};
  uint32_t shield_count_down_{0};
  uint32_t shield_{0};
};
}  // namespace battle_game::unit
