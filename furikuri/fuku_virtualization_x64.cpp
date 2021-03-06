#include "stdafx.h"
#include "fuku_virtualization_x64.h"


fuku_virtualization_x64::fuku_virtualization_x64() {}

fuku_virtualization_x64::~fuku_virtualization_x64(){}


fuku_vm_result fuku_virtualization_x64::build_bytecode(const fuku_code_holder& code_holder,
    std::vector<fuku_code_relocation>& relocation_table, std::vector<fuku_code_association>& association_table, 
    uint64_t destination_virtual_address) {

    return fuku_vm_result::fuku_vm_error;
}

std::vector<uint8_t> fuku_virtualization_x64::create_vm_jumpout(uint64_t src_address, uint64_t dst_address, uint64_t vm_entry_address, std::vector<fuku_code_relocation>& relocation_table) const {
    return std::vector<uint8_t>();
}

std::vector<uint8_t> fuku_virtualization_x64::get_bytecode() const {
    return std::vector<uint8_t>();
}

fuku_arch fuku_virtualization_x64::get_target_arch() const {
    return fuku_arch::fuku_arch_x64;
}