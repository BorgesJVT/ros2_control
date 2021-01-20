// Copyright 2020 PAL Robotics S.L.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#ifndef HARDWARE_INTERFACE__CONTROLLER_INFO_HPP_
#define HARDWARE_INTERFACE__CONTROLLER_INFO_HPP_

#include <string>
// TODO(v-lopez)
// #include <vector>
// #include <hardware_interface/interface_resources.h>

namespace hardware_interface
{

/// Controller Information
/**
 * This struct contains information about a given controller.
 */
struct ControllerInfo
{
  /** Controller name. */
  std::string name;

  /** Controller type. */
  std::string type;

  // TODO(v-lopez)
  /** Claimed resources, grouped by the hardware interface they belong to. */
//   std::map<std::string, std::vector<std::string>> resources;
};

}  // namespace hardware_interface
#endif  // HARDWARE_INTERFACE__CONTROLLER_INFO_HPP_
