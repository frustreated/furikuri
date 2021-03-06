#pragma once



class fuku_code_analyzer {
    fuku_code_holder code;

    bool fuku_code_analyzer::analyze_code(
        const uint8_t * src, size_t src_len,
        uint64_t virtual_address, 
        const std::vector<fuku_image_relocation>* relocations,
        fuku_code_holder& analyzed_code);


    bool fuku_code_analyzer::merge_code(const fuku_code_holder& code_holder);
    bool fuku_code_analyzer::merge_labels();

public:
    fuku_code_analyzer::fuku_code_analyzer();
    fuku_code_analyzer::fuku_code_analyzer(fuku_arch arch);
    fuku_code_analyzer::fuku_code_analyzer(const fuku_code_analyzer& code_analyzer);
    fuku_code_analyzer::fuku_code_analyzer(const fuku_code_holder& code_holder);

    fuku_code_analyzer::~fuku_code_analyzer();

    fuku_code_analyzer& fuku_code_analyzer::operator=(const fuku_code_analyzer& code_analyzer);
    fuku_code_analyzer& fuku_code_analyzer::operator=(const fuku_code_holder& code_holder);

    bool fuku_code_analyzer::push_code(
        const uint8_t * src, uint32_t src_len,
        uint64_t virtual_address,
        const std::vector<fuku_image_relocation>*	relocations);

    bool fuku_code_analyzer::push_code(const fuku_code_holder& code_holder);
    bool fuku_code_analyzer::push_code(const fuku_code_analyzer&  code_analyzer);
public:
    void fuku_code_analyzer::set_arch(fuku_arch arch);
    void fuku_code_analyzer::clear();

public:
    fuku_code_holder& get_code();
    const fuku_code_holder& get_code() const;
};