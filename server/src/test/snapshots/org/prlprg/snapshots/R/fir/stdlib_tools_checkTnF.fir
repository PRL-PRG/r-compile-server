fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner482604644;
    st checkTnF = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner482604644(package, dir, file, `lib.loc`) {
  (reg package:*, reg dir:*, reg file:*, reg lib_loc:*) -+> V { var package:*, var dir:*, var file:*, var `lib.loc`:*, reg lib_loc_isMissing:L, reg lib_loc_orDefault:*, reg character:cls, reg r:V, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg missing:cls, reg r3:V, reg r4:V, reg c:L, reg sym1:cls, reg base1:cls, reg guard1:L, reg r5:V, reg r6:V, reg package1:*, reg package2:V, reg length:cls, reg r7:V, reg r8:V, reg c1:L, reg stop:cls, reg r9:V, reg find_package:cls, reg package3:*, reg package4:V, reg p:p(V +), reg lib_loc1:*, reg lib_loc2:V, reg p1:p(V +), reg r13:V, reg file_exists:cls, reg file_path:cls, reg dir1:*, reg dir2:V, reg p2:p(V +), reg r15:V, reg p3:p(V +), reg r17:V, reg c2:L, reg warning:cls, reg r18:V, reg file_path1:cls, reg dir3:*, reg dir4:V, reg p4:p(V +), reg package5:*, reg package6:V, reg p5:p(V +), reg r22:V, reg file_exists1:cls, reg code_file:*, reg code_file1:V, reg p6:p(V +), reg r24:V, reg c3:L, reg code_file2:*, reg code_file3:V, reg file_path2:cls, reg dir5:*, reg dir6:V, reg p7:p(V +), reg r26:V, reg dir_exists:cls, reg example_dir:*, reg example_dir1:V, reg p8:p(V +), reg r28:V, reg c4:L, reg sym2:cls, reg base2:cls, reg guard2:L, reg r29:V, reg r30:V, reg code_files:*, reg code_files1:V, reg list_files_with_exts:cls, reg example_dir2:*, reg example_dir3:V, reg p9:p(V +), reg r32:V, reg c5:cls, reg r33:V, reg r34:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r36:V, reg r37:V, reg missing1:cls, reg r38:V, reg r39:V, reg c6:L, reg dir_exists1:cls, reg dir7:*, reg dir8:V, reg p10:p(V +), reg r41:V, reg r42:V, reg c7:L, reg stop1:cls, reg gettextf:cls, reg dir9:*, reg dir10:V, reg p11:p(V +), reg r44:V, reg p12:p(V +), reg r46:V, reg file_path_as_absolute:cls, reg dir11:*, reg dir12:V, reg p13:p(V +), reg r49:V, reg file_path3:cls, reg dir13:*, reg dir14:V, reg p14:p(V +), reg r51:V, reg dir_exists2:cls, reg code_dir:*, reg code_dir1:V, reg p15:p(V +), reg r53:V, reg c8:L, reg list_files_with_type:cls, reg code_dir2:*, reg code_dir3:V, reg p16:p(V +), reg r55:V, reg file_path4:cls, reg dir15:*, reg dir16:V, reg p17:p(V +), reg r58:V, reg dir_exists3:cls, reg docs_dir:*, reg docs_dir1:V, reg p18:p(V +), reg r60:V, reg c9:L, reg list_files_with_type1:cls, reg docs_dir2:*, reg docs_dir3:V, reg p19:p(V +), reg r62:V, reg r63:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r64:V, reg r65:V, reg missing2:cls, reg r66:V, reg r67:V, reg c10:L, reg file_test:cls, reg file1:*, reg file2:V, reg p20:p(V +), reg r69:V, reg r70:V, reg c11:L, reg stop2:cls, reg gettextf1:cls, reg file3:*, reg file4:V, reg p21:p(V +), reg r72:V, reg p22:p(V +), reg r74:V, reg r75:V, reg file5:*, reg file6:V, reg stop3:cls, reg r76:V, reg r77:cls, reg sym5:cls, reg base5:cls, reg guard5:L, reg r78:V, reg r79:V, reg list:cls, reg r80:V, reg code_files2:*, reg code_files3:V, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c12:L, reg x:V, reg find_TnF_in_code:cls, reg file7:*, reg file8:V, reg p23:p(V +), reg r82:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r83:V, reg i7:I, reg r84:V, reg exprs:*, reg exprs1:V, reg length1:cls, reg r85:V, reg c13:L, reg sym7:cls, reg base7:cls, reg guard7:L, reg r86:V, reg i12:I, reg r87:V, reg exprs2:*, reg exprs3:V, reg list1:cls, reg r88:V, reg file9:*, reg file10:V, reg l1:*, reg names__:cls, reg r89:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r90:V, reg i15:I, reg r91:V, reg bad_exprs:*, reg bad_exprs1:V, reg exprs4:*, reg exprs5:V, reg c14:cls, reg r92:V, reg i16:I, reg docs_files:*, reg docs_files1:V, reg s1:V, reg l2:I, reg i17:I, reg i18:I, reg i19:I, reg c15:L, reg x1:V, reg prepare_Rd:cls, reg file11:*, reg file12:V, reg p24:p(V +), reg _Platform:*, reg _Platform1:V, reg c16:L, reg _Platform3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r95:V, reg p25:p(V +), reg r97:V, reg _Rd_get_example_code:cls, reg Rd:*, reg Rd1:V, reg p26:p(V +), reg r99:V, reg find_TnF_in_code1:cls, reg file13:*, reg file14:V, reg p27:p(V +), reg txt:*, reg txt1:V, reg p28:p(V +), reg r102:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r103:V, reg i24:I, reg r104:V, reg exprs6:*, reg exprs7:V, reg length2:cls, reg r105:V, reg c17:L, reg sym10:cls, reg base10:cls, reg guard10:L, reg r106:V, reg i29:I, reg r107:V, reg exprs8:*, reg exprs9:V, reg list2:cls, reg r108:V, reg file15:*, reg file16:V, reg l3:*, reg names__1:cls, reg r109:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r110:V, reg i32:I, reg r111:V, reg bad_exprs2:*, reg bad_exprs3:V, reg exprs10:*, reg exprs11:V, reg c18:cls, reg r112:V, reg i33:I, reg l4:*, reg class__:cls, reg r114:V, reg bad_exprs4:*, reg bad_exprs5:V |
    mkenv;
    st package = package;
    st dir = dir;
    st file = file;
    lib_loc_isMissing = missing.0(lib_loc);
    if lib_loc_isMissing then L0(NULL) else L0(lib_loc);
  L0(lib_loc_orDefault):
    st `lib.loc` = lib_loc_orDefault;
    character = ldf character;
    check L41() else D0();
  D0():
    deopt 1 [];
  L41():
    r = dyn character();
    check L42() else D1();
  D1():
    deopt 2 [r];
  L42():
    st docs_files = r;
    st code_files = r;
    sym = ldf missing;
    base = ldf missing in base;
    guard = `==`.4(sym, base);
    if guard then L43() else L44();
  L1(r2):
    r4 = `!`(r2);
    c = `as.logical`(r4);
    if c then L45() else L2();
  L43():
    missing = ldf missing in base;
    r3 = dyn missing(<sym package>);
    goto L1(r3);
  L44():
    r1 = dyn base(<sym package>);
    goto L1(r1);
  L2():
    sym3 = ldf missing;
    base3 = ldf missing in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L82() else L83();
  L13():
    r77 = clos inner1185121020;
    st find_TnF_in_code = r77;
    sym5 = ldf list;
    base5 = ldf list in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L123() else L124();
  L45():
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L46() else L47();
  L3(r6):
    r8 = `!=`(r6, 1);
    c1 = `as.logical`(r8);
    if c1 then L50() else L4();
  L14(r37):
    r39 = `!`(r37);
    c6 = `as.logical`(r39);
    if c6 then L84() else L15();
  L26(r79):
    st bad_exprs = r79;
    code_files2 = ld code_files;
    check L126() else D51();
  L46():
    package1 = ld package;
    check L48() else D2();
  L47():
    r5 = dyn base1(<sym package>);
    goto L3(r5);
  L82():
    missing1 = ldf missing in base;
    r38 = dyn missing1(<sym dir>);
    goto L14(r38);
  L83():
    r36 = dyn base3(<sym dir>);
    goto L14(r36);
  L123():
    list = ldf list in base;
    r80 = dyn list();
    check L125() else D50();
  L124():
    r78 = dyn base5();
    goto L26(r78);
  D2():
    deopt 11 [package1];
  D50():
    deopt 164 [r80];
  D51():
    deopt 166 [code_files2];
  L4():
    goto L5();
  L5():
    find_package = ldf `find.package`;
    check L54() else D6();
  L15():
    sym4 = ldf missing;
    base4 = ldf missing in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L110() else L111();
  L48():
    package2 = force? package1;
    checkMissing(package2);
    length = ldf length in base;
    r7 = dyn length(package2);
    check L49() else D3();
  L50():
    stop = ldf stop;
    check L51() else D4();
  L84():
    dir_exists1 = ldf `dir.exists`;
    check L85() else D25();
  L125():
    goto L26(r80);
  L126():
    code_files3 = force? code_files2;
    checkMissing(code_files3);
    s = toForSeq(code_files3);
    l = length(s);
    i = 0;
    goto L27(i);
  D3():
    deopt 14 [r7];
  D4():
    deopt 18 [];
  D6():
    deopt 24 [];
  D25():
    deopt 84 [];
  L22(r65):
    r67 = `!`(r65);
    c10 = `as.logical`(r67);
    if c10 then L112() else L23();
  L27(i1):
    i2 = `+`.1(i1, 1);
    c12 = `<`.1(l, i2);
    if c12 then L127() else L33();
  L49():
    goto L3(r7);
  L51():
    r9 = dyn stop("argument 'package' must be of length 1");
    check L52() else D5();
  L54():
    p = prom<V +>{
      package3 = ld package;
      package4 = force? package3;
      checkMissing(package4);
      return package4;
    };
    p1 = prom<V +>{
      lib_loc1 = ld `lib.loc`;
      lib_loc2 = force? lib_loc1;
      checkMissing(lib_loc2);
      return lib_loc2;
    };
    r13 = dyn find_package(p, p1);
    check L55() else D7();
  L85():
    p10 = prom<V +>{
      dir7 = ld dir;
      dir8 = force? dir7;
      checkMissing(dir8);
      return dir8;
    };
    r41 = dyn dir_exists1(p10);
    check L86() else D26();
  L110():
    missing2 = ldf missing in base;
    r66 = dyn missing2(<sym file>);
    goto L22(r66);
  L111():
    r64 = dyn base4(<sym file>);
    goto L22(r64);
  D5():
    deopt 20 [r9];
  D7():
    deopt 27 [r13];
  D26():
    deopt 86 [r41];
  L23():
    stop3 = ldf stop;
    check L121() else D48();
  L33():
    x = `[[`(s, i2, NULL, TRUE);
    st file = x;
    find_TnF_in_code = ldf find_TnF_in_code;
    check L128() else D52();
  L52():
    goto L5();
  L55():
    st dir = r13;
    file_exists = ldf `file.exists`;
    check L56() else D8();
  L86():
    r42 = `!`(r41);
    c7 = `as.logical`(r42);
    if c7 then L87() else L16();
  L112():
    file_test = ldf file_test;
    check L113() else D43();
  L127():
    docs_files = ld docs_files;
    check L148() else D64();
  D8():
    deopt 30 [];
  D43():
    deopt 140 [];
  D48():
    deopt 155 [];
  D52():
    deopt 169 [i2];
  D64():
    deopt 207 [docs_files];
  L16():
    file_path_as_absolute = ldf file_path_as_absolute;
    check L91() else D29();
  L17():
    file_path3 = ldf `file.path`;
    check L93() else D31();
  L56():
    p3 = prom<V +>{
      file_path = ldf `file.path`;
      p2 = prom<V +>{
        dir1 = ld dir;
        dir2 = force? dir1;
        checkMissing(dir2);
        return dir2;
      };
      r15 = dyn file_path(p2, "R", "all.rda");
      return r15;
    };
    r17 = dyn file_exists(p3);
    check L57() else D9();
  L87():
    stop1 = ldf stop;
    check L88() else D27();
  L113():
    p20 = prom<V +>{
      file1 = ld file;
      file2 = force? file1;
      checkMissing(file2);
      return file2;
    };
    r69 = dyn file_test("-f", p20);
    check L114() else D44();
  L121():
    r76 = dyn stop3("you must specify 'package', 'dir' or 'file'");
    check L122() else D49();
  L128():
    p23 = prom<V +>{
      file7 = ld file;
      file8 = force? file7;
      checkMissing(file8);
      return file8;
    };
    r82 = dyn find_TnF_in_code(p23);
    check L129() else D53();
  L148():
    docs_files1 = force? docs_files;
    checkMissing(docs_files1);
    s1 = toForSeq(docs_files1);
    l2 = length(s1);
    i17 = 0;
    goto L34(i17);
  D9():
    deopt 32 [r17];
  D27():
    deopt 89 [];
  D29():
    deopt 95 [];
  D31():
    deopt 100 [];
  D44():
    deopt 143 [r69];
  D49():
    deopt 157 [r76];
  D53():
    deopt 171 [i2, r82];
  L34(i18):
    i19 = `+`.1(i18, 1);
    c15 = `<`.1(l2, i19);
    if c15 then L149() else L40();
  L57():
    c2 = `as.logical`(r17);
    if c2 then L58() else L6();
  L88():
    p12 = prom<V +>{
      gettextf = ldf gettextf;
      p11 = prom<V +>{
        dir9 = ld dir;
        dir10 = force? dir9;
        checkMissing(dir10);
        return dir10;
      };
      r44 = dyn gettextf("directory '%s' does not exist", p11);
      return r44;
    };
    r46 = dyn stop1[, domain](p12, NA_LGL);
    check L89() else D28();
  L91():
    p13 = prom<V +>{
      dir11 = ld dir;
      dir12 = force? dir11;
      checkMissing(dir12);
      return dir12;
    };
    r49 = dyn file_path_as_absolute(p13);
    check L92() else D30();
  L93():
    p14 = prom<V +>{
      dir13 = ld dir;
      dir14 = force? dir13;
      checkMissing(dir14);
      return dir14;
    };
    r51 = dyn file_path3(p14, "R");
    check L94() else D32();
  L114():
    r70 = `!`(r69);
    c11 = `as.logical`(r70);
    if c11 then L115() else L24();
  L122():
    goto L13();
  L129():
    st exprs = r82;
    sym6 = ldf length;
    base6 = ldf length in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L130() else L131();
  D28():
    deopt 93 [r46];
  D30():
    deopt 97 [r49];
  D32():
    deopt 103 [r51];
  L6():
    goto L7();
  L7():
    file_path1 = ldf `file.path`;
    check L62() else D12();
  L24():
    file5 = ld file;
    check L119() else D47();
  L25(r75):
    goto L13();
  L28(i7, r84):
    c13 = `as.logical`(r84);
    if c13 then L134() else L29();
  L40():
    x1 = `[[`(s1, i19, NULL, TRUE);
    st file = x1;
    prepare_Rd = ldf prepare_Rd;
    check L150() else D65();
  L58():
    warning = ldf warning;
    check L59() else D10();
  L89():
    goto L17();
  L92():
    st dir = r49;
    goto L17();
  L94():
    st code_dir = r51;
    dir_exists2 = ldf `dir.exists`;
    check L95() else D33();
  L115():
    stop2 = ldf stop;
    check L116() else D45();
  L130():
    exprs = ld exprs;
    check L132() else D54();
  L131():
    r83 = dyn base6(<sym exprs>);
    goto L28(i2, r83);
  L149():
    l4 = ld bad_exprs;
    class__ = ldf `class<-`;
    check L174() else D81();
  D10():
    deopt 34 [];
  D12():
    deopt 40 [];
  D33():
    deopt 106 [];
  D45():
    deopt 146 [];
  D47():
    deopt 151 [file5];
  D54():
    deopt 175 [i2, exprs];
  D65():
    deopt 210 [i19];
  D81():
    deopt 264 ["checkTnF", l4, "checkTnF"];
  L29():
    goto L32(i7);
  L32(i16):
    goto L27(i16);
  L59():
    r18 = dyn warning("cannot check R code installed as image");
    check L60() else D11();
  L62():
    p4 = prom<V +>{
      dir3 = ld dir;
      dir4 = force? dir3;
      checkMissing(dir4);
      return dir4;
    };
    p5 = prom<V +>{
      package5 = ld package;
      package6 = force? package5;
      checkMissing(package6);
      return package6;
    };
    r22 = dyn file_path1(p4, "R", p5);
    check L63() else D13();
  L95():
    p15 = prom<V +>{
      code_dir = ld code_dir;
      code_dir1 = force? code_dir;
      checkMissing(code_dir1);
      return code_dir1;
    };
    r53 = dyn dir_exists2(p15);
    check L96() else D34();
  L116():
    p22 = prom<V +>{
      gettextf1 = ldf gettextf;
      p21 = prom<V +>{
        file3 = ld file;
        file4 = force? file3;
        checkMissing(file4);
        return file4;
      };
      r72 = dyn gettextf1("file '%s' does not exist", p21);
      return r72;
    };
    r74 = dyn stop2[, domain](p22, NA_LGL);
    check L117() else D46();
  L119():
    file6 = force? file5;
    checkMissing(file6);
    st code_files = file6;
    goto L25(file6);
  L132():
    exprs1 = force? exprs;
    checkMissing(exprs1);
    length1 = ldf length in base;
    r85 = dyn length1(exprs1);
    check L133() else D55();
  L134():
    sym7 = ldf list;
    base7 = ldf list in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L135() else L136();
  L150():
    p24 = prom<V +>{
      file11 = ld file;
      file12 = force? file11;
      checkMissing(file12);
      return file12;
    };
    p25 = prom<V +>{
      _Platform = ld `.Platform`;
      _Platform1 = force? _Platform;
      checkMissing(_Platform1);
      c16 = `is.object`(_Platform1);
      if c16 then L1() else L2(_Platform1);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("$", _Platform1);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(_Platform3):
      r95 = `$`(_Platform3, <sym OS.type>);
      goto L0(r95);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    r97 = dyn prepare_Rd[, defines](p24, p25);
    check L151() else D66();
  L174():
    r114 = dyn class__(l4, NULL, "checkTnF");
    check L175() else D82();
  D11():
    deopt 36 [r18];
  D13():
    deopt 44 [r22];
  D34():
    deopt 108 [r53];
  D46():
    deopt 150 [r74];
  D55():
    deopt 178 [i2, r85];
  D66():
    deopt 214 [i19, r97];
  D82():
    deopt 266 ["checkTnF", r114];
  L30(i12, r87):
    st exprs = r87;
    file9 = ld file;
    check L139() else D58();
  L60():
    goto L7();
  L63():
    st code_file = r22;
    file_exists1 = ldf `file.exists`;
    check L64() else D14();
  L96():
    c8 = `as.logical`(r53);
    if c8 then L97() else L18();
  L117():
    goto L25(r74);
  L133():
    goto L28(i2, r85);
  L135():
    exprs2 = ld exprs;
    check L137() else D56();
  L136():
    r86 = dyn base7(<sym exprs>);
    goto L30(i7, r86);
  L151():
    st Rd = r97;
    _Rd_get_example_code = ldf `.Rd_get_example_code`;
    check L152() else D67();
  L175():
    st bad_exprs = r114;
    bad_exprs4 = ld bad_exprs;
    check L176() else D83();
  D14():
    deopt 47 [];
  D56():
    deopt 181 [i7, exprs2];
  D58():
    deopt 186 [i12, file9];
  D67():
    deopt 217 [i19];
  D83():
    deopt 268 [bad_exprs4];
  L18():
    goto L19();
  L19():
    file_path4 = ldf `file.path`;
    check L101() else D37();
  L64():
    p6 = prom<V +>{
      code_file = ld code_file;
      code_file1 = force? code_file;
      checkMissing(code_file1);
      return code_file1;
    };
    r24 = dyn file_exists1(p6);
    check L65() else D15();
  L97():
    list_files_with_type = ldf list_files_with_type;
    check L98() else D35();
  L137():
    exprs3 = force? exprs2;
    checkMissing(exprs3);
    list1 = ldf list in base;
    r88 = dyn list1(exprs3);
    check L138() else D57();
  L139():
    file10 = force? file9;
    checkMissing(file10);
    l1 = ld exprs;
    names__ = ldf `names<-`;
    check L140() else D59();
  L152():
    p26 = prom<V +>{
      Rd = ld Rd;
      Rd1 = force? Rd;
      checkMissing(Rd1);
      return Rd1;
    };
    r99 = dyn _Rd_get_example_code(p26);
    check L153() else D68();
  L176():
    bad_exprs5 = force? bad_exprs4;
    checkMissing(bad_exprs5);
    popenv;
    return bad_exprs5;
  D15():
    deopt 49 [r24];
  D35():
    deopt 110 [];
  D37():
    deopt 118 [];
  D57():
    deopt 184 [i7, r88];
  D59():
    deopt 189 [i12, file10, l1, file10];
  D68():
    deopt 219 [i19, r99];
  L65():
    c3 = `as.logical`(r24);
    if c3 then L66() else L8();
  L98():
    p16 = prom<V +>{
      code_dir2 = ld code_dir;
      code_dir3 = force? code_dir2;
      checkMissing(code_dir3);
      return code_dir3;
    };
    r55 = dyn list_files_with_type(p16, "code");
    check L99() else D36();
  L101():
    p17 = prom<V +>{
      dir15 = ld dir;
      dir16 = force? dir15;
      checkMissing(dir16);
      return dir16;
    };
    r58 = dyn file_path4(p17, "man");
    check L102() else D38();
  L138():
    goto L30(i7, r88);
  L140():
    r89 = dyn names__(l1, NULL, file10);
    check L141() else D60();
  L153():
    st txt = r99;
    find_TnF_in_code1 = ldf find_TnF_in_code;
    check L154() else D69();
  D36():
    deopt 113 [r55];
  D38():
    deopt 121 [r58];
  D60():
    deopt 191 [i12, file10, r89];
  D69():
    deopt 222 [i19];
  L8():
    goto L9();
  L9():
    file_path2 = ldf `file.path`;
    check L69() else D17();
  L66():
    code_file2 = ld code_file;
    check L67() else D16();
  L99():
    st code_files = r55;
    goto L19();
  L102():
    st docs_dir = r58;
    dir_exists3 = ldf `dir.exists`;
    check L103() else D39();
  L141():
    st exprs = r89;
    sym8 = ldf c;
    base8 = ldf c in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L142() else L143();
  L154():
    p27 = prom<V +>{
      file13 = ld file;
      file14 = force? file13;
      checkMissing(file14);
      return file14;
    };
    p28 = prom<V +>{
      txt = ld txt;
      txt1 = force? txt;
      checkMissing(txt1);
      return txt1;
    };
    r102 = dyn find_TnF_in_code1(p27, p28);
    check L155() else D70();
  D16():
    deopt 50 [code_file2];
  D17():
    deopt 56 [];
  D39():
    deopt 124 [];
  D70():
    deopt 225 [i19, r102];
  L31(i15, r91):
    st bad_exprs = r91;
    goto L32(i15);
  L67():
    code_file3 = force? code_file2;
    checkMissing(code_file3);
    st code_files = code_file3;
    goto L9();
  L69():
    p7 = prom<V +>{
      dir5 = ld dir;
      dir6 = force? dir5;
      checkMissing(dir6);
      return dir6;
    };
    r26 = dyn file_path2(p7, "R-ex");
    check L70() else D18();
  L103():
    p18 = prom<V +>{
      docs_dir = ld docs_dir;
      docs_dir1 = force? docs_dir;
      checkMissing(docs_dir1);
      return docs_dir1;
    };
    r60 = dyn dir_exists3(p18);
    check L104() else D40();
  L142():
    bad_exprs = ld bad_exprs;
    check L144() else D61();
  L143():
    r90 = dyn base8(<sym bad_exprs>, <sym exprs>);
    goto L31(i12, r90);
  L155():
    st exprs = r102;
    sym9 = ldf length;
    base9 = ldf length in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L156() else L157();
  D18():
    deopt 59 [r26];
  D40():
    deopt 126 [r60];
  D61():
    deopt 195 [i12, bad_exprs];
  L35(i24, r104):
    c17 = `as.logical`(r104);
    if c17 then L160() else L36();
  L70():
    st example_dir = r26;
    dir_exists = ldf `dir.exists`;
    check L71() else D19();
  L104():
    c9 = `as.logical`(r60);
    if c9 then L105() else L20();
  L144():
    bad_exprs1 = force? bad_exprs;
    checkMissing(bad_exprs1);
    exprs4 = ld exprs;
    check L145() else D62();
  L156():
    exprs6 = ld exprs;
    check L158() else D71();
  L157():
    r103 = dyn base9(<sym exprs>);
    goto L35(i19, r103);
  D19():
    deopt 62 [];
  D62():
    deopt 197 [i12, exprs4];
  D71():
    deopt 229 [i19, exprs6];
  L20():
    goto L21(NULL);
  L21(r63):
    goto L13();
  L36():
    goto L39(i24);
  L39(i33):
    goto L34(i33);
  L71():
    p8 = prom<V +>{
      example_dir = ld example_dir;
      example_dir1 = force? example_dir;
      checkMissing(example_dir1);
      return example_dir1;
    };
    r28 = dyn dir_exists(p8);
    check L72() else D20();
  L105():
    list_files_with_type1 = ldf list_files_with_type;
    check L106() else D41();
  L145():
    exprs5 = force? exprs4;
    checkMissing(exprs5);
    c14 = ldf c in base;
    r92 = dyn c14(bad_exprs1, exprs5);
    check L146() else D63();
  L158():
    exprs7 = force? exprs6;
    checkMissing(exprs7);
    length2 = ldf length in base;
    r105 = dyn length2(exprs7);
    check L159() else D72();
  L160():
    sym10 = ldf list;
    base10 = ldf list in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L161() else L162();
  D20():
    deopt 64 [r28];
  D41():
    deopt 128 [];
  D63():
    deopt 200 [i12, r92];
  D72():
    deopt 232 [i19, r105];
  L37(i29, r107):
    st exprs = r107;
    file15 = ld file;
    check L165() else D75();
  L72():
    c4 = `as.logical`(r28);
    if c4 then L73() else L10();
  L106():
    p19 = prom<V +>{
      docs_dir2 = ld docs_dir;
      docs_dir3 = force? docs_dir2;
      checkMissing(docs_dir3);
      return docs_dir3;
    };
    r62 = dyn list_files_with_type1(p19, "docs");
    check L107() else D42();
  L146():
    goto L31(i12, r92);
  L159():
    goto L35(i19, r105);
  L161():
    exprs8 = ld exprs;
    check L163() else D73();
  L162():
    r106 = dyn base10(<sym exprs>);
    goto L37(i24, r106);
  D42():
    deopt 131 [r62];
  D73():
    deopt 235 [i24, exprs8];
  D75():
    deopt 240 [i29, file15];
  L10():
    goto L12(NULL);
  L12(r34):
    goto L13();
  L73():
    sym2 = ldf c;
    base2 = ldf c in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L74() else L75();
  L107():
    st docs_files = r62;
    goto L21(r62);
  L163():
    exprs9 = force? exprs8;
    checkMissing(exprs9);
    list2 = ldf list in base;
    r108 = dyn list2(exprs9);
    check L164() else D74();
  L165():
    file16 = force? file15;
    checkMissing(file16);
    l3 = ld exprs;
    names__1 = ldf `names<-`;
    check L166() else D76();
  D74():
    deopt 238 [i24, r108];
  D76():
    deopt 243 [i29, file16, l3, file16];
  L11(r30):
    st code_files = r30;
    goto L12(r30);
  L74():
    code_files = ld code_files;
    check L76() else D21();
  L75():
    r29 = dyn base2(<sym code_files>, <lang list_files_with_exts(example_dir, "R")>);
    goto L11(r29);
  L164():
    goto L37(i24, r108);
  L166():
    r109 = dyn names__1(l3, NULL, file16);
    check L167() else D77();
  D21():
    deopt 67 [code_files];
  D77():
    deopt 245 [i29, file16, r109];
  L76():
    code_files1 = force? code_files;
    checkMissing(code_files1);
    list_files_with_exts = ldf list_files_with_exts;
    check L77() else D22();
  L167():
    st exprs = r109;
    sym11 = ldf c;
    base11 = ldf c in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L168() else L169();
  D22():
    deopt 70 [];
  L38(i32, r111):
    st bad_exprs = r111;
    goto L39(i32);
  L77():
    p9 = prom<V +>{
      example_dir2 = ld example_dir;
      example_dir3 = force? example_dir2;
      checkMissing(example_dir3);
      return example_dir3;
    };
    r32 = dyn list_files_with_exts(p9, "R");
    check L78() else D23();
  L168():
    bad_exprs2 = ld bad_exprs;
    check L170() else D78();
  L169():
    r110 = dyn base11(<sym bad_exprs>, <sym exprs>);
    goto L38(i29, r110);
  D23():
    deopt 73 [r32];
  D78():
    deopt 249 [i29, bad_exprs2];
  L78():
    c5 = ldf c in base;
    r33 = dyn c5(code_files1, r32);
    check L79() else D24();
  L170():
    bad_exprs3 = force? bad_exprs2;
    checkMissing(bad_exprs3);
    exprs10 = ld exprs;
    check L171() else D79();
  D24():
    deopt 75 [r33];
  D79():
    deopt 251 [i29, exprs10];
  L79():
    goto L11(r33);
  L171():
    exprs11 = force? exprs10;
    checkMissing(exprs11);
    c18 = ldf c in base;
    r112 = dyn c18(bad_exprs3, exprs11);
    check L172() else D80();
  D80():
    deopt 254 [i29, r112];
  L172():
    goto L38(i29, r112);
  }
}
fun inner1185121020(file, txt) {
  (reg file:*, reg txt:*) -+> V { var file:*, var txt:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg list:cls, reg r2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg r4:V, reg c:cls, reg r5:V, reg r6:cls, reg sym2:cls, reg base2:cls, reg guard2:L, reg r7:V, reg r8:V, reg missing:cls, reg r9:V, reg c1:L, reg tryCatch:cls, reg parse:cls, reg file1:*, reg file2:V, reg p:p(V +), reg p1:p(V +), reg r12:V, reg p2:p(V +), reg r14:cls, reg p3:p(V +), reg r16:V, reg r17:V, reg tryCatch1:cls, reg str2expression:cls, reg txt1:*, reg txt2:V, reg p4:p(V +), reg r19:V, reg p5:p(V +), reg r21:cls, reg p6:p(V +), reg r23:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r24:V, reg r25:V, reg exprs:*, reg exprs1:V, reg r26:I, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c2:L, reg x:V, reg find_bad_exprs:cls, reg exprs2:*, reg exprs3:V, reg c3:L, reg exprs5:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg i5:*, reg i6:V, reg __:cls, reg r27:V, reg p7:p(V +), reg r29:V, reg matches:*, reg matches1:V |
    mkenv;
    st file = file;
    st txt = txt;
    sym = ldf list;
    base = ldf list in base;
    guard = `==`.4(sym, base);
    if guard then L8() else L9();
  L0(r1):
    st matches = r1;
    sym1 = ldf c;
    base1 = ldf c in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L11() else L12();
  L8():
    list = ldf list in base;
    r2 = dyn list();
    check L10() else D0();
  L9():
    r = dyn base();
    goto L0(r);
  D0():
    deopt 3 [r2];
  L1(r4):
    st TnF = r4;
    r6 = clos inner516286167;
    st find_bad_exprs = r6;
    sym2 = ldf missing;
    base2 = ldf missing in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L14() else L15();
  L10():
    goto L0(r2);
  L11():
    c = ldf c in base;
    r5 = dyn c("T", "F");
    check L13() else D1();
  L12():
    r3 = dyn base1("T", "F");
    goto L1(r3);
  D1():
    deopt 10 [r5];
  L2(r8):
    c1 = `as.logical`(r8);
    if c1 then L16() else L3();
  L13():
    goto L1(r5);
  L14():
    missing = ldf missing in base;
    r9 = dyn missing(<sym txt>);
    goto L2(r9);
  L15():
    r7 = dyn base2(<sym txt>);
    goto L2(r7);
  L3():
    tryCatch1 = ldf tryCatch;
    check L20() else D4();
  L4(r17):
    st exprs = r17;
    sym3 = ldf seq_along;
    base3 = ldf seq_along in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L22() else L23();
  L16():
    tryCatch = ldf tryCatch;
    check L17() else D2();
  D2():
    deopt 19 [];
  D4():
    deopt 25 [];
  L5(r25):
    s = toForSeq(r25);
    l = length(s);
    i = 0;
    goto L6(i);
  L17():
    p2 = prom<V +>{
      parse = ldf parse;
      p = prom<V +>{
        file1 = ld file;
        file2 = force? file1;
        checkMissing(file2);
        return file2;
      };
      p1 = prom<V +>{
        return -1;
      };
      r12 = dyn parse[file, n](p, p1);
      return r12;
    };
    p3 = prom<V +>{
      r14 = clos inner3708401697;
      return r14;
    };
    r16 = dyn tryCatch[, error](p2, p3);
    check L18() else D3();
  L20():
    p5 = prom<V +>{
      str2expression = ldf str2expression;
      p4 = prom<V +>{
        txt1 = ld txt;
        txt2 = force? txt1;
        checkMissing(txt2);
        return txt2;
      };
      r19 = dyn str2expression(p4);
      return r19;
    };
    p6 = prom<V +>{
      r21 = clos inner3708401697;
      return r21;
    };
    r23 = dyn tryCatch1[, error](p5, p6);
    check L21() else D5();
  L22():
    exprs = ld exprs;
    check L24() else D6();
  L23():
    r24 = dyn base3(<sym exprs>);
    goto L5(r24);
  D3():
    deopt 23 [r16];
  D5():
    deopt 29 [r23];
  D6():
    deopt 32 [exprs];
  L6(i1):
    i2 = `+`.1(i1, 1);
    c2 = `<`.1(l, i2);
    if c2 then L25() else L7();
  L18():
    goto L4(r16);
  L21():
    goto L4(r23);
  L24():
    exprs1 = force? exprs;
    checkMissing(exprs1);
    r26 = seq_along(exprs1);
    goto L5(r26);
  L7():
    x = `[[`(s, i2, NULL, TRUE);
    st i = x;
    find_bad_exprs = ldf find_bad_exprs;
    check L26() else D7();
  L25():
    matches = ld matches;
    check L28() else D9();
  D7():
    deopt 36 [i2];
  D9():
    deopt 43 [matches];
  L26():
    p7 = prom<V +>{
      exprs2 = ld exprs;
      exprs3 = force? exprs2;
      checkMissing(exprs3);
      c3 = `is.object`(exprs3);
      if c3 then L1() else L2(exprs3);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("[[", exprs3);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(exprs5):
      i5 = ld i;
      i6 = force? i5;
      __ = ldf `[[` in base;
      r27 = dyn __(exprs5, i6);
      goto L0(r27);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    r29 = dyn find_bad_exprs(p7, NULL);
    check L27() else D8();
  L28():
    matches1 = force? matches;
    checkMissing(matches1);
    popenv;
    return matches1;
  D8():
    deopt 39 [i2, r29];
  L27():
    goto L6(i2);
  }
}
fun inner516286167(e, p) {
  (reg e:*, reg p:*) -+> V { var e:*, var p:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg e1:*, reg e2:V, reg c:L, reg c1:L, reg c3:V, reg _in_:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r2:V, reg r3:V, reg e3:*, reg e4:V, reg as_character:cls, reg r4:V, reg p1:p(V +), reg TnF:*, reg TnF1:V, reg p2:p(V +), reg r7:V, reg c4:L, reg c5:V, reg c7:L, reg c9:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r8:V, reg c12:L, reg r9:V, reg p3:*, reg p4:V, reg c13:V, reg r10:V, reg c14:L, reg c15:V, reg c17:L, reg sym3:cls, reg base3:cls, reg guard3:L, reg r11:V, reg r12:V, reg matches:*, reg matches1:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r13:V, reg r14:V, reg p5:*, reg p6:V, reg list:cls, reg r15:V, reg c18:cls, reg r16:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r17:V, reg r18:V, reg e5:*, reg e6:V, reg is_recursive:cls, reg r19:V, reg c19:L, reg sym6:cls, reg base6:cls, reg guard6:L, reg r20:V, reg r21:V, reg e7:*, reg e8:V, reg r22:I, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c20:L, reg x:V, reg Recall:cls, reg e9:*, reg e10:V, reg c21:L, reg e12:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg i5:*, reg i6:V, reg __:cls, reg r23:V, reg p7:p(V +), reg e13:*, reg e14:V, reg p8:p(V +), reg r26:V |
    mkenv;
    st e = e;
    st p = p;
    sym = ldf `is.name`;
    base = ldf `is.name` in base;
    guard = `==`.4(sym, base);
    if guard then L12() else L13();
  L0(r1):
    c1 = `as.logical`(r1);
    if c1 then L15() else L1(c1);
  L12():
    e1 = ld e;
    check L14() else D0();
  L13():
    r = dyn base(<sym e>);
    goto L0(r);
  D0():
    deopt 1 [e1];
  L1(c3):
    c7 = `as.logical`(c3);
    if c7 then L19() else L2(c7);
  L14():
    e2 = force? e1;
    checkMissing(e2);
    c = `is.symbol`(e2);
    goto L0(c);
  L15():
    _in_ = ldf `%in%`;
    check L16() else D1();
  D1():
    deopt 5 [c1];
  L2(c9):
    c17 = `as.logical`(c9);
    if c17 then L24() else L4();
  L16():
    p1 = prom<V +>{
      sym1 = ldf `as.character`;
      base1 = ldf `as.character` in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r3):
      return r3;
    L1():
      e3 = ld e;
      e4 = force? e3;
      checkMissing(e4);
      as_character = ldf `as.character` in base;
      r4 = dyn as_character(e4);
      goto L0(r4);
    L2():
      r2 = dyn base1(<sym e>);
      goto L0(r2);
    };
    p2 = prom<V +>{
      TnF = ld TnF;
      TnF1 = force? TnF;
      checkMissing(TnF1);
      return TnF1;
    };
    r7 = dyn _in_(p1, p2);
    check L17() else D2();
  L19():
    sym2 = ldf `is.null`;
    base2 = ldf `is.null` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L20() else L21();
  D2():
    deopt 8 [c1, r7];
  L3(c12, r9):
    r10 = `!`(r9);
    c14 = `as.logical`(r10);
    c15 = `&&`(c12, c14);
    goto L2(c15);
  L4():
    sym5 = ldf `is.recursive`;
    base5 = ldf `is.recursive` in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L34() else L35();
  L17():
    c4 = `as.logical`(r7);
    c5 = `&&`(c1, c4);
    goto L1(c5);
  L20():
    p3 = ld p;
    check L22() else D3();
  L21():
    r8 = dyn base2(<sym p>);
    goto L3(c7, r8);
  L24():
    sym3 = ldf c;
    base3 = ldf c in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L25() else L26();
  D3():
    deopt 11 [c7, p3];
  L5(r12):
    sst matches = r12;
    invisible.0();
    popenv;
    return r12;
  L7(r18):
    c19 = `as.logical`(r18);
    if c19 then L38() else L8();
  L22():
    p4 = force? p3;
    checkMissing(p4);
    c13 = `==`(p4, NULL);
    goto L3(c7, c13);
  L25():
    matches = ld matches;
    check L27() else D4();
  L26():
    r11 = dyn base3(<sym matches>, <lang list(p)>);
    goto L5(r11);
  L34():
    e5 = ld e;
    check L36() else D8();
  L35():
    r17 = dyn base5(<sym e>);
    goto L7(r17);
  D4():
    deopt 18 [matches];
  D8():
    deopt 32 [e5];
  L8():
    invisible.0();
    popenv;
    return NULL;
  L27():
    matches1 = force? matches;
    checkMissing(matches1);
    sym4 = ldf list;
    base4 = ldf list in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L28() else L29();
  L36():
    e6 = force? e5;
    checkMissing(e6);
    is_recursive = ldf `is.recursive` in base;
    r19 = dyn is_recursive(e6);
    check L37() else D9();
  L38():
    sym6 = ldf seq_along;
    base6 = ldf seq_along in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L39() else L40();
  D9():
    deopt 35 [r19];
  L6(r14):
    c18 = ldf c in base;
    r16 = dyn c18(matches1, r14);
    check L32() else D7();
  L9(r21):
    s = toForSeq(r21);
    l = length(s);
    i = 0;
    goto L10(i);
  L28():
    p5 = ld p;
    check L30() else D5();
  L29():
    r13 = dyn base4(<sym p>);
    goto L6(r13);
  L37():
    goto L7(r19);
  L39():
    e7 = ld e;
    check L41() else D10();
  L40():
    r20 = dyn base6(<sym e>);
    goto L9(r20);
  D5():
    deopt 22 [p5];
  D7():
    deopt 27 [r16];
  D10():
    deopt 37 [e7];
  L10(i1):
    i2 = `+`.1(i1, 1);
    c20 = `<`.1(l, i2);
    if c20 then L42() else L11();
  L30():
    p6 = force? p5;
    checkMissing(p6);
    list = ldf list in base;
    r15 = dyn list(p6);
    check L31() else D6();
  L32():
    goto L5(r16);
  L41():
    e8 = force? e7;
    checkMissing(e8);
    r22 = seq_along(e8);
    goto L9(r22);
  D6():
    deopt 25 [r15];
  L11():
    x = `[[`(s, i2, NULL, TRUE);
    st i = x;
    Recall = ldf Recall;
    check L43() else D11();
  L31():
    goto L6(r15);
  L42():
    invisible.0();
    popenv;
    return i2;
  D11():
    deopt 41 [i2];
  L43():
    p7 = prom<V +>{
      e9 = ld e;
      e10 = force? e9;
      checkMissing(e10);
      c21 = `is.object`(e10);
      if c21 then L1() else L2(e10);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("[[", e10);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(e12):
      i5 = ld i;
      i6 = force? i5;
      __ = ldf `[[` in base;
      r23 = dyn __(e12, i6);
      goto L0(r23);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    p8 = prom<V +>{
      e13 = ld e;
      e14 = force? e13;
      checkMissing(e14);
      return e14;
    };
    r26 = dyn Recall(p7, p8);
    check L44() else D12();
  D12():
    deopt 44 [i2, r26];
  L44():
    goto L10(i2);
  }
}
fun inner3708401697(e) {
  (reg e:*) -+> V { var e:*, reg stop:cls, reg gettextf:cls, reg file:*, reg file1:V, reg p:p(V +), reg _massage_file_parse_error_message:cls, reg conditionMessage:cls, reg e1:*, reg e2:V, reg p1:p(V +), reg r2:V, reg p2:p(V +), reg r4:V, reg p3:p(V +), reg r6:V, reg p4:p(V +), reg r8:V |
    mkenv;
    st e = e;
    stop = ldf stop;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p4 = prom<V +>{
      gettextf = ldf gettextf;
      p = prom<V +>{
        file = ld file;
        file1 = force? file;
        checkMissing(file1);
        return file1;
      };
      p3 = prom<V +>{
        _massage_file_parse_error_message = ldf `.massage_file_parse_error_message`;
        p2 = prom<V +>{
          conditionMessage = ldf conditionMessage;
          p1 = prom<V +>{
            e1 = ld e;
            e2 = force? e1;
            checkMissing(e2);
            return e2;
          };
          r2 = dyn conditionMessage(p1);
          return r2;
        };
        r4 = dyn _massage_file_parse_error_message(p2);
        return r4;
      };
      r6 = dyn gettextf("parse error in file '%s':\n%s", p, p3);
      return r6;
    };
    r8 = dyn stop[, domain, `call.`](p4, NA_LGL, FALSE);
    check L1() else D1();
  D1():
    deopt 7 [r8];
  L1():
    popenv;
    return r8;
  }
}