
Analyzing loop at test1.c:11

test1.c:11: note: ===== analyze_loop_nest =====
test1.c:11: note: === vect_analyze_loop_form ===
test1.c:11: note: === get_loop_niters ===
test1.c:11: note: ==> get_loop_niters:65536
test1.c:11: note: === vect_analyze_data_refs ===

test1.c:11: note: get vectype with 4 units of type double
test1.c:11: note: vectype: vector(4) double
test1.c:11: note: get vectype with 4 units of type double
test1.c:11: note: vectype: vector(4) double
test1.c:11: note: get vectype with 4 units of type double
test1.c:11: note: vectype: vector(4) double
test1.c:11: note: === vect_analyze_scalar_cycles ===
test1.c:11: note: Analyze phi: i_17 = PHI <i_14(4), 0(2)>

test1.c:11: note: Access function of PHI: {0, +, 1}_1
test1.c:11: note: step: 1,  init: 0
test1.c:11: note: Detected induction.
test1.c:11: note: Analyze phi: .MEM_18 = PHI <.MEM_13(4), .MEM_3(D)(2)>

test1.c:11: note: Analyze phi: ivtmp_29 = PHI <ivtmp_28(4), 65536(2)>

test1.c:11: note: Access function of PHI: {65536, +, 4294967295}_1
test1.c:11: note: step: 4294967295,  init: 65536
test1.c:11: note: Detected induction.
test1.c:11: note: === vect_pattern_recog ===
test1.c:11: note: vect_is_simple_use: operand i.0_5
test1.c:11: note: def_stmt: i.0_5 = (unsigned int) i_17;

test1.c:11: note: type of def: 3.
test1.c:11: note: === vect_mark_stmts_to_be_vectorized ===
test1.c:11: note: init: phi relevant? i_17 = PHI <i_14(4), 0(2)>

test1.c:11: note: init: phi relevant? .MEM_18 = PHI <.MEM_13(4), .MEM_3(D)(2)>

test1.c:11: note: init: phi relevant? ivtmp_29 = PHI <ivtmp_28(4), 65536(2)>

test1.c:11: note: init: stmt relevant? i.0_5 = (unsigned int) i_17;

test1.c:11: note: init: stmt relevant? _6 = i.0_5 * 8;

test1.c:11: note: init: stmt relevant? _7 = a_4(D) + _6;

test1.c:11: note: init: stmt relevant? _8 = *_7;

test1.c:11: note: init: stmt relevant? _10 = b_9(D) + _6;

test1.c:11: note: init: stmt relevant? _11 = *_10;

test1.c:11: note: init: stmt relevant? _12 = _8 + _11;

test1.c:11: note: init: stmt relevant? *_7 = _12;

test1.c:11: note: vec_stmt_relevant_p: stmt has vdefs.
test1.c:11: note: mark relevant 4, live 0.
test1.c:11: note: init: stmt relevant? i_14 = i_17 + 1;

test1.c:11: note: init: stmt relevant? ivtmp_28 = ivtmp_29 - 1;

test1.c:11: note: init: stmt relevant? if (ivtmp_28 != 0)

test1.c:11: note: worklist: examine stmt: *_7 = _12;

test1.c:11: note: vect_is_simple_use: operand _12
test1.c:11: note: def_stmt: _12 = _8 + _11;

test1.c:11: note: type of def: 3.
test1.c:11: note: mark relevant 4, live 0.
test1.c:11: note: worklist: examine stmt: _12 = _8 + _11;

test1.c:11: note: vect_is_simple_use: operand _8
test1.c:11: note: def_stmt: _8 = *_7;

test1.c:11: note: type of def: 3.
test1.c:11: note: mark relevant 4, live 0.
test1.c:11: note: vect_is_simple_use: operand _11
test1.c:11: note: def_stmt: _11 = *_10;

test1.c:11: note: type of def: 3.
test1.c:11: note: mark relevant 4, live 0.
test1.c:11: note: worklist: examine stmt: _11 = *_10;

test1.c:11: note: worklist: examine stmt: _8 = *_7;

test1.c:11: note: === vect_analyze_dependences ===
test1.c:11: note: dependence distance  = 0.
test1.c:11: note: dependence distance == 0 between *_7 and *_7
test1.c:11: note: versioning for alias required: can't determine dependence between *_10 and *_7
test1.c:11: note: mark for run-time aliasing test between *_10 and *_7
test1.c:11: note: === vect_determine_vectorization_factor ===
test1.c:11: note: ==> examining phi: i_17 = PHI <i_14(4), 0(2)>

test1.c:11: note: ==> examining phi: .MEM_18 = PHI <.MEM_13(4), .MEM_3(D)(2)>

test1.c:11: note: ==> examining phi: ivtmp_29 = PHI <ivtmp_28(4), 65536(2)>

test1.c:11: note: ==> examining statement: i.0_5 = (unsigned int) i_17;

test1.c:11: note: skip.
test1.c:11: note: ==> examining statement: _6 = i.0_5 * 8;

test1.c:11: note: skip.
test1.c:11: note: ==> examining statement: _7 = a_4(D) + _6;

test1.c:11: note: skip.
test1.c:11: note: ==> examining statement: _8 = *_7;

test1.c:11: note: get vectype for scalar type:  double
test1.c:11: note: get vectype with 4 units of type double
test1.c:11: note: vectype: vector(4) double
test1.c:11: note: vectype: vector(4) double
test1.c:11: note: nunits = 4
test1.c:11: note: ==> examining statement: _10 = b_9(D) + _6;

test1.c:11: note: skip.
test1.c:11: note: ==> examining statement: _11 = *_10;

test1.c:11: note: get vectype for scalar type:  double
test1.c:11: note: get vectype with 4 units of type double
test1.c:11: note: vectype: vector(4) double
test1.c:11: note: vectype: vector(4) double
test1.c:11: note: nunits = 4
test1.c:11: note: ==> examining statement: _12 = _8 + _11;

test1.c:11: note: get vectype for scalar type:  double
test1.c:11: note: get vectype with 4 units of type double
test1.c:11: note: vectype: vector(4) double
test1.c:11: note: get vectype for scalar type:  double
test1.c:11: note: get vectype with 4 units of type double
test1.c:11: note: vectype: vector(4) double
test1.c:11: note: vectype: vector(4) double
test1.c:11: note: nunits = 4
test1.c:11: note: ==> examining statement: *_7 = _12;

test1.c:11: note: get vectype for scalar type:  double
test1.c:11: note: get vectype with 4 units of type double
test1.c:11: note: vectype: vector(4) double
test1.c:11: note: vectype: vector(4) double
test1.c:11: note: nunits = 4
test1.c:11: note: ==> examining statement: i_14 = i_17 + 1;

test1.c:11: note: skip.
test1.c:11: note: ==> examining statement: ivtmp_28 = ivtmp_29 - 1;

test1.c:11: note: skip.
test1.c:11: note: ==> examining statement: if (ivtmp_28 != 0)

test1.c:11: note: skip.
test1.c:11: note: vectorization factor = 4
test1.c:11: note: === vect_analyze_data_refs_alignment ===
test1.c:11: note: dependence distance  = 0.
test1.c:11: note: accesses have the same alignment.dependence distance modulo vf == 0 between *_7 and *_7
test1.c:11: note: vect_compute_data_ref_alignment:
test1.c:11: note: can't force alignment of ref: *_7
test1.c:11: note: vect_compute_data_ref_alignment:
test1.c:11: note: can't force alignment of ref: *_10
test1.c:11: note: vect_compute_data_ref_alignment:
test1.c:11: note: can't force alignment of ref: *_7
test1.c:11: note: === vect_analyze_data_ref_accesses ===
test1.c:11: note: === vect_prune_runtime_alias_test_list ===
test1.c:11: note: === vect_enhance_data_refs_alignment ===
test1.c:11: note: Unknown misalignment, is_packed = 0
test1.c:11: note: vector alignment may not be reachable
test1.c:11: note: Vectorizing an unaligned access.
test1.c:11: note: Vectorizing an unaligned access.
test1.c:11: note: Vectorizing an unaligned access.
test1.c:11: note: === vect_analyze_slp ===
test1.c:11: note: === vect_make_slp_decision ===
test1.c:11: note: === vect_detect_hybrid_slp ===
test1.c:11: note: === vect_analyze_loop_operations ===
test1.c:11: note: examining phi: i_17 = PHI <i_14(4), 0(2)>

test1.c:11: note: examining phi: .MEM_18 = PHI <.MEM_13(4), .MEM_3(D)(2)>

test1.c:11: note: examining phi: ivtmp_29 = PHI <ivtmp_28(4), 65536(2)>

test1.c:11: note: ==> examining statement: i.0_5 = (unsigned int) i_17;

test1.c:11: note: irrelevant.
test1.c:11: note: ==> examining statement: _6 = i.0_5 * 8;

test1.c:11: note: irrelevant.
test1.c:11: note: ==> examining statement: _7 = a_4(D) + _6;

test1.c:11: note: irrelevant.
test1.c:11: note: ==> examining statement: _8 = *_7;

test1.c:11: note: vect_is_simple_use: operand *_7
test1.c:11: note: not ssa-name.
test1.c:11: note: use not simple.
test1.c:11: note: vect_is_simple_use: operand *_7
test1.c:11: note: not ssa-name.
test1.c:11: note: use not simple.
test1.c:11: note: vect_model_load_cost: unaligned supported by hardware.
test1.c:11: note: vect_model_load_cost: inside_cost = 2, prologue_cost = 0 .
test1.c:11: note: ==> examining statement: _10 = b_9(D) + _6;

test1.c:11: note: irrelevant.
test1.c:11: note: ==> examining statement: _11 = *_10;

test1.c:11: note: vect_is_simple_use: operand *_10
test1.c:11: note: not ssa-name.
test1.c:11: note: use not simple.
test1.c:11: note: vect_is_simple_use: operand *_10
test1.c:11: note: not ssa-name.
test1.c:11: note: use not simple.
test1.c:11: note: vect_model_load_cost: unaligned supported by hardware.
test1.c:11: note: vect_model_load_cost: inside_cost = 2, prologue_cost = 0 .
test1.c:11: note: ==> examining statement: _12 = _8 + _11;

test1.c:11: note: vect_is_simple_use: operand _8
test1.c:11: note: def_stmt: _8 = *_7;

test1.c:11: note: type of def: 3.
test1.c:11: note: vect_is_simple_use: operand _11
test1.c:11: note: def_stmt: _11 = *_10;

test1.c:11: note: type of def: 3.
test1.c:11: note: === vectorizable_operation ===
test1.c:11: note: vect_model_simple_cost: inside_cost = 1, prologue_cost = 0 .
test1.c:11: note: ==> examining statement: *_7 = _12;

test1.c:11: note: vect_is_simple_use: operand _12
test1.c:11: note: def_stmt: _12 = _8 + _11;

test1.c:11: note: type of def: 3.
test1.c:11: note: vect_model_store_cost: unaligned supported by hardware.
test1.c:11: note: vect_model_store_cost: inside_cost = 2, prologue_cost = 0 .
test1.c:11: note: ==> examining statement: i_14 = i_17 + 1;

test1.c:11: note: irrelevant.
test1.c:11: note: ==> examining statement: ivtmp_28 = ivtmp_29 - 1;

test1.c:11: note: irrelevant.
test1.c:11: note: ==> examining statement: if (ivtmp_28 != 0)

test1.c:11: note: irrelevant.
test1.c:11: note: vectorization_factor = 4, niters = 65536
test1.c:11: note: === vect_update_slp_costs_according_to_vf ===cost model: Adding cost of checks for loop versioning aliasing.

test1.c:11: note: Cost model analysis: 
  Vector inside of loop cost: 7
  Vector prologue cost: 4
  Vector epilogue cost: 0
  Scalar iteration cost: 4
  Scalar outside cost: 1
  Vector outside cost: 4
  prologue iterations: 0
  epilogue iterations: 0
  Calculated minimum iters for profitability: 2

test1.c:11: note:   Runtime profitability threshold = 3

test1.c:11: note:   Static estimate profitability threshold = 3


Vectorizing loop at test1.c:11

test1.c:11: note: === vec_transform_loop ===
test1.c:11: note: created vect_pb.6_24
test1.c:11: note: created vect_pa.9_23
test1.c:11: note: create runtime check for data references *_10 and *_7
test1.c:11: note: created 1 versioning for alias checks.

test1.c:11: note: ------>vectorizing phi: i_17 = PHI <i_14(4), 0(12)>

test1.c:11: note: ------>vectorizing phi: .MEM_18 = PHI <.MEM_13(4), .MEM_3(D)(12)>

test1.c:11: note: ------>vectorizing phi: ivtmp_29 = PHI <ivtmp_28(4), 65536(12)>

test1.c:11: note: ------>vectorizing statement: i.0_5 = (unsigned int) i_17;

test1.c:11: note: ------>vectorizing statement: _6 = i.0_5 * 8;

test1.c:11: note: ------>vectorizing statement: _7 = a_4(D) + _6;

test1.c:11: note: ------>vectorizing statement: _8 = *_7;

test1.c:11: note: transform statement.
test1.c:11: note: transform load. ncopies = 1
test1.c:11: note: create vector_type-pointer variable to type: vector(4) double  vectorizing a pointer ref: *a_4(D)
test1.c:11: note: created vect_pa.13_38
test1.c:11: note: add new stmt: vect_var_.14_41 = MEM[(double *)vect_pa.10_39];

test1.c:11: note: ------>vectorizing statement: _10 = b_9(D) + _6;

test1.c:11: note: ------>vectorizing statement: _11 = *_10;

test1.c:11: note: transform statement.
test1.c:11: note: transform load. ncopies = 1
test1.c:11: note: create vector_type-pointer variable to type: vector(4) double  vectorizing a pointer ref: *b_9(D)
test1.c:11: note: created vect_pb.18_42
test1.c:11: note: add new stmt: vect_var_.19_45 = MEM[(double *)vect_pb.15_43];

test1.c:11: note: ------>vectorizing statement: _12 = _8 + _11;

test1.c:11: note: transform statement.
test1.c:11: note: vect_is_simple_use: operand _8
test1.c:11: note: def_stmt: _8 = *_7;

test1.c:11: note: type of def: 3.
test1.c:11: note: vect_is_simple_use: operand _11
test1.c:11: note: def_stmt: _11 = *_10;

test1.c:11: note: type of def: 3.
test1.c:11: note: transform binary/unary operation.
test1.c:11: note: vect_get_vec_def_for_operand: _8
test1.c:11: note: vect_is_simple_use: operand _8
test1.c:11: note: def_stmt: _8 = *_7;

test1.c:11: note: type of def: 3.
test1.c:11: note: def =  _8  def_stmt =  _8 = *_7;

test1.c:11: note: vect_get_vec_def_for_operand: _11
test1.c:11: note: vect_is_simple_use: operand _11
test1.c:11: note: def_stmt: _11 = *_10;

test1.c:11: note: type of def: 3.
test1.c:11: note: def =  _11  def_stmt =  _11 = *_10;

test1.c:11: note: add new stmt: vect_var_.20_46 = vect_var_.14_41 + vect_var_.19_45;

test1.c:11: note: ------>vectorizing statement: *_7 = _12;

test1.c:11: note: transform statement.
test1.c:11: note: vect_is_simple_use: operand _12
test1.c:11: note: def_stmt: _12 = _8 + _11;

test1.c:11: note: type of def: 3.
test1.c:11: note: transform store. ncopies = 1
test1.c:11: note: vect_get_vec_def_for_operand: _12
test1.c:11: note: vect_is_simple_use: operand _12
test1.c:11: note: def_stmt: _12 = _8 + _11;

test1.c:11: note: type of def: 3.
test1.c:11: note: def =  _12  def_stmt =  _12 = _8 + _11;

test1.c:11: note: create vector_type-pointer variable to type: vector(4) double  vectorizing a pointer ref: *a_4(D)
test1.c:11: note: created vect_pa.24_47
test1.c:11: note: add new stmt: MEM[(double *)vect_pa.21_48] = vect_var_.20_46;

test1.c:11: note: ------>vectorizing statement: i_14 = i_17 + 1;

test1.c:11: note: ------>vectorizing statement: ivtmp_28 = ivtmp_29 - 1;

test1.c:11: note: ------>vectorizing statement: vect_pa.10_40 = vect_pa.10_39 + 32;

test1.c:11: note: ------>vectorizing statement: vect_pb.15_44 = vect_pb.15_43 + 32;

test1.c:11: note: ------>vectorizing statement: vect_pa.21_49 = vect_pa.21_48 + 32;

test1.c:11: note: ------>vectorizing statement: if (ivtmp_28 != 0)

loop at test1.c:13: if (ivtmp_51 < 16384)

test1.c:11: note: LOOP VECTORIZED.
test1.c:7: note: vectorized 1 loops in function.

test1.c:7: note: ===vect_slp_analyze_bb===

test1.c:7: note: === vect_analyze_data_refs ===

test1.c:7: note: not vectorized: not enough data-refs in basic block.

test1.c:7: note: ===vect_slp_analyze_bb===

test1.c:7: note: === vect_analyze_data_refs ===

test1.c:7: note: not vectorized: not enough data-refs in basic block.

test1.c:13: note: ===vect_slp_analyze_bb===

test1.c:13: note: === vect_analyze_data_refs ===

test1.c:13: note: not vectorized: no vectype for stmt: vect_var_.14_41 = MEM[(double *)vect_pa.10_39];
 scalar_type: vector(4) double
test1.c:13: note: === vect_pattern_recog ===
test1.c:13: note: === vect_analyze_dependences ===
test1.c:13: note: === vect_analyze_data_refs_alignment ===
test1.c:13: note: === vect_analyze_data_ref_accesses ===
test1.c:13: note: === vect_analyze_slp ===
test1.c:13: note: Failed to SLP the basic block.
test1.c:13: note: not vectorized: failed to find SLP opportunities in basic block.

test1.c:7: note: ===vect_slp_analyze_bb===

test1.c:7: note: === vect_analyze_data_refs ===

test1.c:7: note: not vectorized: not enough data-refs in basic block.

test1.c:7: note: ===vect_slp_analyze_bb===

test1.c:7: note: === vect_analyze_data_refs ===

test1.c:7: note: not vectorized: not enough data-refs in basic block.

test1.c:13: note: ===vect_slp_analyze_bb===

test1.c:13: note: === vect_analyze_data_refs ===

test1.c:13: note: get vectype with 4 units of type double
test1.c:13: note: vectype: vector(4) double
test1.c:13: note: get vectype with 4 units of type double
test1.c:13: note: vectype: vector(4) double
test1.c:13: note: get vectype with 4 units of type double
test1.c:13: note: vectype: vector(4) double
test1.c:13: note: === vect_pattern_recog ===
test1.c:13: note: vect_is_simple_use: operand i.0_27
test1.c:13: note: def_stmt: i.0_27 = (unsigned int) i_15;

test1.c:13: note: type of def: 3.
test1.c:13: note: === vect_analyze_dependences ===
test1.c:13: note: determined dependence between *_25 and *_25
test1.c:13: note: can't determine dependence between *_31 and *_25
test1.c:13: note: === vect_analyze_data_refs_alignment ===
test1.c:13: note: vect_compute_data_ref_alignment:
test1.c:13: note: SLP: step doesn't divide the vector-size.
test1.c:13: note: Unknown alignment for access: *a_4(D)
test1.c:13: note: vect_compute_data_ref_alignment:
test1.c:13: note: SLP: step doesn't divide the vector-size.
test1.c:13: note: Unknown alignment for access: *b_9(D)
test1.c:13: note: vect_compute_data_ref_alignment:
test1.c:13: note: SLP: step doesn't divide the vector-size.
test1.c:13: note: Unknown alignment for access: *a_4(D)
test1.c:13: note: === vect_analyze_data_ref_accesses ===
test1.c:13: note: === vect_analyze_slp ===
test1.c:13: note: Failed to SLP the basic block.
test1.c:13: note: not vectorized: failed to find SLP opportunities in basic block.

test1.c:13: note: ***** Re-trying analysis with vector size 16

test1.c:13: note: === vect_analyze_data_refs ===

test1.c:13: note: get vectype with 2 units of type double
test1.c:13: note: vectype: vector(2) double
test1.c:13: note: get vectype with 2 units of type double
test1.c:13: note: vectype: vector(2) double
test1.c:13: note: get vectype with 2 units of type double
test1.c:13: note: vectype: vector(2) double
test1.c:13: note: === vect_pattern_recog ===
test1.c:13: note: vect_is_simple_use: operand i.0_27
test1.c:13: note: def_stmt: i.0_27 = (unsigned int) i_15;

test1.c:13: note: type of def: 3.
test1.c:13: note: === vect_analyze_dependences ===
test1.c:13: note: determined dependence between *_25 and *_25
test1.c:13: note: can't determine dependence between *_31 and *_25
test1.c:13: note: === vect_analyze_data_refs_alignment ===
test1.c:13: note: vect_compute_data_ref_alignment:
test1.c:13: note: SLP: step doesn't divide the vector-size.
test1.c:13: note: Unknown alignment for access: *a_4(D)
test1.c:13: note: vect_compute_data_ref_alignment:
test1.c:13: note: SLP: step doesn't divide the vector-size.
test1.c:13: note: Unknown alignment for access: *b_9(D)
test1.c:13: note: vect_compute_data_ref_alignment:
test1.c:13: note: SLP: step doesn't divide the vector-size.
test1.c:13: note: Unknown alignment for access: *a_4(D)
test1.c:13: note: === vect_analyze_data_ref_accesses ===
test1.c:13: note: === vect_analyze_slp ===
test1.c:13: note: Failed to SLP the basic block.
test1.c:13: note: not vectorized: failed to find SLP opportunities in basic block.

test1.c:7: note: ===vect_slp_analyze_bb===

test1.c:7: note: === vect_analyze_data_refs ===

test1.c:7: note: not vectorized: not enough data-refs in basic block.

test1.c:15: note: ===vect_slp_analyze_bb===

test1.c:15: note: === vect_analyze_data_refs ===

test1.c:15: note: not vectorized: not enough data-refs in basic block.
