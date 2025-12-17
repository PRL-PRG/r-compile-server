fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner244280249;
    st `.check_package_subdirs` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner244280249(dir, doDelete) {
  (reg dir:*, reg doDelete:*) -+> V { var dir:*, var doDelete:*, reg doDelete_isMissing:L, reg doDelete_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg c:cls, reg r2:V, reg r3:cls, reg dir_exists:cls, reg dir1:*, reg dir2:V, reg p:p(V +), reg r5:V, reg r6:V, reg c1:L, reg stop:cls, reg gettextf:cls, reg dir3:*, reg dir4:V, reg p1:p(V +), reg r8:V, reg p2:p(V +), reg r10:V, reg file_path_as_absolute:cls, reg dir5:*, reg dir6:V, reg p3:p(V +), reg r13:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r14:V, reg r15:V, reg character:cls, reg r16:V, reg character1:cls, reg r17:V, reg character2:cls, reg r18:V, reg character3:cls, reg r19:V, reg list:cls, reg r20:V, reg file_path:cls, reg dir7:*, reg dir8:V, reg p4:p(V +), reg r22:V, reg dir_exists1:cls, reg code_dir:*, reg code_dir1:V, reg p5:p(V +), reg r24:V, reg c2:L, reg mydir:cls, reg code_dir2:*, reg code_dir3:V, reg p6:p(V +), reg r26:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r27:V, reg r28:V, reg list_files_with_type:cls, reg code_dir4:*, reg code_dir5:V, reg p7:p(V +), reg OS_subdirs:*, reg OS_subdirs1:V, reg p8:p(V +), reg r31:V, reg c3:cls, reg r32:V, reg setdiff:cls, reg all_files:*, reg all_files1:V, reg p9:p(V +), reg R_files:*, reg R_files1:V, reg p10:p(V +), reg r35:V, reg which:cls, reg endsWith:cls, reg wrong:*, reg wrong1:V, reg p11:p(V +), reg r37:V, reg p12:p(V +), reg r39:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r40:V, reg r41:V, reg generated:*, reg generated1:V, reg length:cls, reg r42:V, reg c4:L, reg wrong2:*, reg wrong3:V, reg c5:L, reg wrong5:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg generated2:*, reg generated3:V, reg r43:V, reg __:cls, reg r44:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r45:V, reg r46:V, reg wrong6:*, reg wrong7:V, reg length1:cls, reg r47:V, reg c6:L, reg wrong8:*, reg wrong9:V, reg l:*, reg c7:L, reg wrong11:V, reg l2:*, reg dr2:V, reg dc1:L, reg dx3:V, reg dx4:V, reg r48:V, reg doDelete1:*, reg doDelete2:V, reg c8:L, reg unlink:cls, reg file_path1:cls, reg dir9:*, reg dir10:V, reg p13:p(V +), reg wrong14:*, reg wrong15:V, reg p14:p(V +), reg r51:V, reg p15:p(V +), reg r53:V, reg r54:V, reg r55:V, reg file_path2:cls, reg dir11:*, reg dir12:V, reg p16:p(V +), reg r58:V, reg dir_exists2:cls, reg man_dir:*, reg man_dir1:V, reg p17:p(V +), reg r60:V, reg c9:L, reg mydir1:cls, reg man_dir2:*, reg man_dir3:V, reg p18:p(V +), reg r62:V, reg list_files_with_type1:cls, reg man_dir4:*, reg man_dir5:V, reg p19:p(V +), reg OS_subdirs2:*, reg OS_subdirs3:V, reg p20:p(V +), reg r65:V, reg setdiff1:cls, reg all_files2:*, reg all_files3:V, reg p21:p(V +), reg man_files:*, reg man_files1:V, reg p22:p(V +), reg r68:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r69:V, reg r70:V, reg wrong16:*, reg wrong17:V, reg length2:cls, reg r71:V, reg c10:L, reg wrong18:*, reg wrong19:V, reg l3:*, reg c11:L, reg wrong21:V, reg l5:*, reg dr4:V, reg dc2:L, reg dx5:V, reg dx6:V, reg r72:V, reg doDelete3:*, reg doDelete4:V, reg c12:L, reg unlink1:cls, reg file_path3:cls, reg dir13:*, reg dir14:V, reg p23:p(V +), reg wrong24:*, reg wrong25:V, reg p24:p(V +), reg r75:V, reg p25:p(V +), reg r77:V, reg r78:V, reg r79:V, reg file_path4:cls, reg dir15:*, reg dir16:V, reg p26:p(V +), reg r82:V, reg dir_exists3:cls, reg demo_dir:*, reg demo_dir1:V, reg p27:p(V +), reg r84:V, reg c13:L, reg mydir2:cls, reg demo_dir2:*, reg demo_dir3:V, reg p28:p(V +), reg r86:V, reg list_files_with_type2:cls, reg demo_dir4:*, reg demo_dir5:V, reg p29:p(V +), reg r88:V, reg setdiff2:cls, reg all_files4:*, reg all_files5:V, reg p30:p(V +), reg sym6:cls, reg base6:cls, reg guard6:L, reg r90:V, reg r91:V, reg demo_files:*, reg demo_files1:V, reg c14:cls, reg r92:V, reg p31:p(V +), reg r94:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r95:V, reg r96:V, reg wrong26:*, reg wrong27:V, reg length3:cls, reg r97:V, reg c15:L, reg wrong28:*, reg wrong29:V, reg l6:*, reg c16:L, reg wrong31:V, reg l8:*, reg dr6:V, reg dc3:L, reg dx7:V, reg dx8:V, reg r98:V, reg doDelete5:*, reg doDelete6:V, reg c17:L, reg unlink2:cls, reg file_path5:cls, reg dir17:*, reg dir18:V, reg p32:p(V +), reg wrong34:*, reg wrong35:V, reg p33:p(V +), reg r101:V, reg p34:p(V +), reg r103:V, reg r104:V, reg r105:V, reg file_path6:cls, reg r107:V, reg _package_vignettes_via_call_to_R:cls, reg dir19:*, reg dir20:V, reg p35:p(V +), reg subdir:*, reg subdir1:V, reg p36:p(V +), reg r110:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r111:V, reg r112:V, reg vigns:*, reg vigns1:V, reg c18:V, reg r113:V, reg c19:L, reg c21:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r114:V, reg c24:L, reg r115:V, reg vigns2:*, reg vigns3:V, reg c25:L, reg c27:L, reg vigns5:V, reg dr8:V, reg dc4:L, reg dx9:V, reg c29:L, reg dx10:V, reg r116:V, reg length4:cls, reg r117:V, reg c30:L, reg c31:V, reg c33:L, reg basename:cls, reg vigns6:*, reg vigns7:V, reg c34:L, reg vigns9:V, reg dr10:V, reg dc5:L, reg dx11:V, reg dx12:V, reg r118:V, reg p37:p(V +), reg r120:V, reg tryCatch:cls, reg _package_vignettes_via_call_to_R1:cls, reg dir21:*, reg dir22:V, reg p38:p(V +), reg subdir2:*, reg subdir3:V, reg p39:p(V +), reg r123:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r124:V, reg r125:V, reg vignettes:*, reg vignettes1:V, reg basename1:cls, reg vigns10:*, reg vigns11:V, reg c35:L, reg vigns13:V, reg dr12:V, reg dc6:L, reg dx13:V, reg dx14:V, reg r126:V, reg p40:p(V +), reg r128:V, reg c36:cls, reg r129:V, reg p41:p(V +), reg r131:cls, reg p42:p(V +), reg r133:V, reg grep:cls, reg vignettes2:*, reg vignettes3:V, reg p43:p(V +), reg r135:V, reg vignettes4:*, reg vignettes5:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r136:V, reg r137:V, reg OK:*, reg OK1:V, reg length5:cls, reg r138:V, reg c37:L, reg wrong36:*, reg wrong37:V, reg c38:L, reg wrong39:V, reg dr14:V, reg dc7:L, reg dx15:V, reg dx16:V, reg OK2:*, reg OK3:V, reg r139:V, reg __1:cls, reg r140:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r141:V, reg r142:V, reg wrong40:*, reg wrong41:V, reg length6:cls, reg r143:V, reg c39:L, reg wrong42:*, reg wrong43:V, reg l9:*, reg c40:L, reg wrong45:V, reg l11:*, reg dr16:V, reg dc8:L, reg dx18:V, reg wrong47:V, reg dx19:V, reg r144:V, reg wrong48:V, reg l12:*, reg class__:cls, reg r145:V, reg wrong_things:*, reg wrong_things1:V |
    mkenv;
    st dir = dir;
    doDelete_isMissing = missing.0(doDelete);
    if doDelete_isMissing then L0(FALSE) else L0(doDelete);
  L0(doDelete_orDefault):
    st doDelete = doDelete_orDefault;
    sym = ldf c;
    base = ldf c in base;
    guard = `==`.4(sym, base);
    if guard then L43() else L44();
  L1(r1):
    st OS_subdirs = r1;
    r3 = clos inner3077716681;
    st mydir = r3;
    dir_exists = ldf `dir.exists`;
    check L46() else D1();
  L43():
    c = ldf c in base;
    r2 = dyn c("unix", "windows");
    check L45() else D0();
  L44():
    r = dyn base("unix", "windows");
    goto L1(r);
  D0():
    deopt 5 [r2];
  D1():
    deopt 11 [];
  L45():
    goto L1(r2);
  L46():
    p = prom<V +>{
      dir1 = ld dir;
      dir2 = force? dir1;
      checkMissing(dir2);
      return dir2;
    };
    r5 = dyn dir_exists(p);
    check L47() else D2();
  D2():
    deopt 13 [r5];
  L47():
    r6 = `!`(r5);
    c1 = `as.logical`(r6);
    if c1 then L48() else L2();
  L2():
    file_path_as_absolute = ldf file_path_as_absolute;
    check L52() else D5();
  L3():
    sym1 = ldf list;
    base1 = ldf list in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L54() else L55();
  L48():
    stop = ldf stop;
    check L49() else D3();
  D3():
    deopt 16 [];
  D5():
    deopt 22 [];
  L4(r15):
    st wrong_things = r15;
    file_path = ldf `file.path`;
    check L65() else D16();
  L49():
    p2 = prom<V +>{
      gettextf = ldf gettextf;
      p1 = prom<V +>{
        dir3 = ld dir;
        dir4 = force? dir3;
        checkMissing(dir4);
        return dir4;
      };
      r8 = dyn gettextf("directory '%s' does not exist", p1);
      return r8;
    };
    r10 = dyn stop[, domain](p2, NA_LGL);
    check L50() else D4();
  L52():
    p3 = prom<V +>{
      dir5 = ld dir;
      dir6 = force? dir5;
      checkMissing(dir6);
      return dir6;
    };
    r13 = dyn file_path_as_absolute(p3);
    check L53() else D6();
  L54():
    character = ldf character;
    check L56() else D7();
  L55():
    r14 = dyn base1[R, man, demo, `inst/doc`](<lang character()>, <lang character()>, <lang character()>, <lang character()>);
    goto L4(r14);
  D4():
    deopt 20 [r10];
  D6():
    deopt 24 [r13];
  D7():
    deopt 29 [];
  D16():
    deopt 48 [];
  L50():
    goto L3();
  L53():
    st dir = r13;
    goto L3();
  L56():
    r16 = dyn character();
    check L57() else D8();
  L65():
    p4 = prom<V +>{
      dir7 = ld dir;
      dir8 = force? dir7;
      checkMissing(dir8);
      return dir8;
    };
    r22 = dyn file_path(p4, "R");
    check L66() else D17();
  D8():
    deopt 30 [r16];
  D17():
    deopt 51 [r22];
  L57():
    character1 = ldf character;
    check L58() else D9();
  L66():
    st code_dir = r22;
    dir_exists1 = ldf `dir.exists`;
    check L67() else D18();
  D9():
    deopt 33 [];
  D18():
    deopt 54 [];
  L58():
    r17 = dyn character1();
    check L59() else D10();
  L67():
    p5 = prom<V +>{
      code_dir = ld code_dir;
      code_dir1 = force? code_dir;
      checkMissing(code_dir1);
      return code_dir1;
    };
    r24 = dyn dir_exists1(p5);
    check L68() else D19();
  D10():
    deopt 34 [r17];
  D19():
    deopt 56 [r24];
  L59():
    character2 = ldf character;
    check L60() else D11();
  L68():
    c2 = `as.logical`(r24);
    if c2 then L69() else L5();
  D11():
    deopt 37 [];
  L5():
    goto L16();
  L16():
    file_path2 = ldf `file.path`;
    check L109() else D39();
  L60():
    r18 = dyn character2();
    check L61() else D12();
  L69():
    mydir = ldf mydir;
    check L70() else D20();
  D12():
    deopt 38 [r18];
  D20():
    deopt 58 [];
  D39():
    deopt 129 [];
  L61():
    character3 = ldf character;
    check L62() else D13();
  L70():
    p6 = prom<V +>{
      code_dir2 = ld code_dir;
      code_dir3 = force? code_dir2;
      checkMissing(code_dir3);
      return code_dir3;
    };
    r26 = dyn mydir(p6);
    check L71() else D21();
  L109():
    p16 = prom<V +>{
      dir11 = ld dir;
      dir12 = force? dir11;
      checkMissing(dir12);
      return dir12;
    };
    r58 = dyn file_path2(p16, "man");
    check L110() else D40();
  D13():
    deopt 41 [];
  D21():
    deopt 60 [r26];
  D40():
    deopt 132 [r58];
  L62():
    r19 = dyn character3();
    check L63() else D14();
  L71():
    st all_files = r26;
    sym2 = ldf c;
    base2 = ldf c in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L72() else L73();
  L110():
    st man_dir = r58;
    dir_exists2 = ldf `dir.exists`;
    check L111() else D41();
  D14():
    deopt 42 [r19];
  D41():
    deopt 135 [];
  L6(r28):
    st R_files = r28;
    setdiff = ldf setdiff;
    check L77() else D25();
  L63():
    list = ldf list in base;
    r20 = dyn list(r16, r17, r18, r19);
    check L64() else D15();
  L72():
    list_files_with_type = ldf list_files_with_type;
    check L74() else D22();
  L73():
    r27 = dyn base2("sysdata.rda", "Makefile.win", "Makefile.ucrt", <lang list_files_with_type(code_dir, "code", full.names=FALSE, OS_subdirs=OS_subdirs)>);
    goto L6(r27);
  L111():
    p17 = prom<V +>{
      man_dir = ld man_dir;
      man_dir1 = force? man_dir;
      checkMissing(man_dir1);
      return man_dir1;
    };
    r60 = dyn dir_exists2(p17);
    check L112() else D42();
  D15():
    deopt 45 [r20];
  D22():
    deopt 68 [];
  D25():
    deopt 80 [];
  D42():
    deopt 137 [r60];
  L64():
    goto L4(r20);
  L74():
    p7 = prom<V +>{
      code_dir4 = ld code_dir;
      code_dir5 = force? code_dir4;
      checkMissing(code_dir5);
      return code_dir5;
    };
    p8 = prom<V +>{
      OS_subdirs = ld OS_subdirs;
      OS_subdirs1 = force? OS_subdirs;
      checkMissing(OS_subdirs1);
      return OS_subdirs1;
    };
    r31 = dyn list_files_with_type[, , `full.names`, OS_subdirs](p7, "code", FALSE, p8);
    check L75() else D23();
  L77():
    p9 = prom<V +>{
      all_files = ld all_files;
      all_files1 = force? all_files;
      checkMissing(all_files1);
      return all_files1;
    };
    p10 = prom<V +>{
      R_files = ld R_files;
      R_files1 = force? R_files;
      checkMissing(R_files1);
      return R_files1;
    };
    r35 = dyn setdiff(p9, p10);
    check L78() else D26();
  L112():
    c9 = `as.logical`(r60);
    if c9 then L113() else L17();
  D23():
    deopt 75 [r31];
  D26():
    deopt 83 [r35];
  L17():
    goto L23();
  L23():
    file_path4 = ldf `file.path`;
    check L137() else D55();
  L75():
    c3 = ldf c in base;
    r32 = dyn c3("sysdata.rda", "Makefile.win", "Makefile.ucrt", r31);
    check L76() else D24();
  L78():
    st wrong = r35;
    which = ldf which;
    check L79() else D27();
  L113():
    mydir1 = ldf mydir;
    check L114() else D43();
  D24():
    deopt 77 [r32];
  D27():
    deopt 86 [];
  D43():
    deopt 139 [];
  D55():
    deopt 183 [];
  L76():
    goto L6(r32);
  L79():
    p12 = prom<V +>{
      endsWith = ldf endsWith;
      p11 = prom<V +>{
        wrong = ld wrong;
        wrong1 = force? wrong;
        checkMissing(wrong1);
        return wrong1;
      };
      r37 = dyn endsWith(p11, ".in");
      return r37;
    };
    r39 = dyn which(p12);
    check L80() else D28();
  L114():
    p18 = prom<V +>{
      man_dir2 = ld man_dir;
      man_dir3 = force? man_dir2;
      checkMissing(man_dir3);
      return man_dir3;
    };
    r62 = dyn mydir1(p18);
    check L115() else D44();
  L137():
    p26 = prom<V +>{
      dir15 = ld dir;
      dir16 = force? dir15;
      checkMissing(dir16);
      return dir16;
    };
    r82 = dyn file_path4(p26, "demo");
    check L138() else D56();
  D28():
    deopt 88 [r39];
  D44():
    deopt 141 [r62];
  D56():
    deopt 186 [r82];
  L80():
    st generated = r39;
    sym3 = ldf length;
    base3 = ldf length in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L81() else L82();
  L115():
    st all_files = r62;
    list_files_with_type1 = ldf list_files_with_type;
    check L116() else D45();
  L138():
    st demo_dir = r82;
    dir_exists3 = ldf `dir.exists`;
    check L139() else D57();
  D45():
    deopt 144 [];
  D57():
    deopt 189 [];
  L7(r41):
    c4 = `as.logical`(r41);
    if c4 then L85() else L8();
  L81():
    generated = ld generated;
    check L83() else D29();
  L82():
    r40 = dyn base3(<sym generated>);
    goto L7(r40);
  L116():
    p19 = prom<V +>{
      man_dir4 = ld man_dir;
      man_dir5 = force? man_dir4;
      checkMissing(man_dir5);
      return man_dir5;
    };
    p20 = prom<V +>{
      OS_subdirs2 = ld OS_subdirs;
      OS_subdirs3 = force? OS_subdirs2;
      checkMissing(OS_subdirs3);
      return OS_subdirs3;
    };
    r65 = dyn list_files_with_type1[, , `full.names`, OS_subdirs](p19, "docs", FALSE, p20);
    check L117() else D46();
  L139():
    p27 = prom<V +>{
      demo_dir = ld demo_dir;
      demo_dir1 = force? demo_dir;
      checkMissing(demo_dir1);
      return demo_dir1;
    };
    r84 = dyn dir_exists3(p27);
    check L140() else D58();
  D29():
    deopt 92 [generated];
  D46():
    deopt 151 [r65];
  D58():
    deopt 191 [r84];
  L8():
    goto L10();
  L10():
    sym4 = ldf length;
    base4 = ldf length in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L92() else L93();
  L83():
    generated1 = force? generated;
    checkMissing(generated1);
    length = ldf length in base;
    r42 = dyn length(generated1);
    check L84() else D30();
  L85():
    wrong2 = ld wrong;
    check L86() else D31();
  L117():
    st man_files = r65;
    setdiff1 = ldf setdiff;
    check L118() else D47();
  L140():
    c13 = `as.logical`(r84);
    if c13 then L141() else L24();
  D30():
    deopt 95 [r42];
  D31():
    deopt 96 [wrong2];
  D47():
    deopt 154 [];
  L11(r46):
    c6 = `as.logical`(r46);
    if c6 then L96() else L12();
  L24():
    goto L30();
  L30():
    file_path6 = ldf `file.path`;
    check L165() else D71();
  L84():
    goto L7(r42);
  L86():
    wrong3 = force? wrong2;
    checkMissing(wrong3);
    c5 = `is.object`(wrong3);
    if c5 then L87() else L88(wrong3);
  L92():
    wrong6 = ld wrong;
    check L94() else D33();
  L93():
    r45 = dyn base4(<sym wrong>);
    goto L11(r45);
  L118():
    p21 = prom<V +>{
      all_files2 = ld all_files;
      all_files3 = force? all_files2;
      checkMissing(all_files3);
      return all_files3;
    };
    p22 = prom<V +>{
      man_files = ld man_files;
      man_files1 = force? man_files;
      checkMissing(man_files1);
      return man_files1;
    };
    r68 = dyn setdiff1(p21, p22);
    check L119() else D48();
  L141():
    mydir2 = ldf mydir;
    check L142() else D59();
  D33():
    deopt 107 [wrong6];
  D48():
    deopt 157 [r68];
  D59():
    deopt 193 [];
  D71():
    deopt 235 [];
  L9(dx1):
    st wrong = dx1;
    goto L10();
  L12():
    goto L15(NULL);
  L15(r55):
    goto L16();
  L87():
    dr = tryDispatchBuiltin.1("[", wrong3);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L89() else L88(dr);
  L88(wrong5):
    generated2 = ld generated;
    check L90() else D32();
  L94():
    wrong7 = force? wrong6;
    checkMissing(wrong7);
    length1 = ldf length in base;
    r47 = dyn length1(wrong7);
    check L95() else D34();
  L96():
    wrong8 = ld wrong;
    check L97() else D35();
  L119():
    st wrong = r68;
    sym5 = ldf length;
    base5 = ldf length in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L120() else L121();
  L142():
    p28 = prom<V +>{
      demo_dir2 = ld demo_dir;
      demo_dir3 = force? demo_dir2;
      checkMissing(demo_dir3);
      return demo_dir3;
    };
    r86 = dyn mydir2(p28);
    check L143() else D60();
  L165():
    r107 = dyn file_path6("inst", "doc");
    check L166() else D72();
  D32():
    deopt 98 [wrong5, generated2];
  D34():
    deopt 110 [r47];
  D35():
    deopt 111 [wrong8];
  D60():
    deopt 195 [r86];
  D72():
    deopt 238 [r107];
  L18(r70):
    c10 = `as.logical`(r70);
    if c10 then L124() else L19();
  L89():
    dx = getTryDispatchBuiltinValue(dr);
    goto L9(dx);
  L90():
    generated3 = force? generated2;
    checkMissing(generated3);
    r43 = `-`(<missing>, generated3);
    __ = ldf `[` in base;
    r44 = dyn __(wrong5, r43);
    goto L9(r44);
  L95():
    goto L11(r47);
  L97():
    wrong9 = force? wrong8;
    checkMissing(wrong9);
    l = ld wrong_things;
    c7 = `is.object`(l);
    if c7 then L99() else L100(wrong9, l);
  L120():
    wrong16 = ld wrong;
    check L122() else D49();
  L121():
    r69 = dyn base5(<sym wrong>);
    goto L18(r69);
  L143():
    st all_files = r86;
    list_files_with_type2 = ldf list_files_with_type;
    check L144() else D61();
  L166():
    st subdir = r107;
    _package_vignettes_via_call_to_R = ldf `.package_vignettes_via_call_to_R`;
    check L167() else D73();
  D49():
    deopt 161 [wrong16];
  D61():
    deopt 198 [];
  D73():
    deopt 241 [];
  L19():
    goto L22(NULL);
  L22(r79):
    goto L23();
  L98(dx4):
    st wrong_things = dx4;
    doDelete1 = ld doDelete;
    check L102() else D36();
  L99():
    dr2 = tryDispatchBuiltin.0("$<-", l, wrong9);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L101() else L100(wrong9, dr2);
  L100(wrong11, l2):
    r48 = `$<-`(l2, <sym R>, wrong9);
    goto L98(r48);
  L122():
    wrong17 = force? wrong16;
    checkMissing(wrong17);
    length2 = ldf length in base;
    r71 = dyn length2(wrong17);
    check L123() else D50();
  L124():
    wrong18 = ld wrong;
    check L125() else D51();
  L144():
    p29 = prom<V +>{
      demo_dir4 = ld demo_dir;
      demo_dir5 = force? demo_dir4;
      checkMissing(demo_dir5);
      return demo_dir5;
    };
    r88 = dyn list_files_with_type2[, , `full.names`](p29, "demo", FALSE);
    check L145() else D62();
  L167():
    p35 = prom<V +>{
      dir19 = ld dir;
      dir20 = force? dir19;
      checkMissing(dir20);
      return dir20;
    };
    p36 = prom<V +>{
      subdir = ld subdir;
      subdir1 = force? subdir;
      checkMissing(subdir1);
      return subdir1;
    };
    r110 = dyn _package_vignettes_via_call_to_R[dir, subdirs](p35, p36);
    check L168() else D74();
  D36():
    deopt 116 [doDelete1];
  D50():
    deopt 164 [r71];
  D51():
    deopt 165 [wrong18];
  D62():
    deopt 203 [r88];
  D74():
    deopt 246 [r110];
  L101():
    dx3 = getTryDispatchBuiltinValue(dr2);
    goto L98(dx3);
  L102():
    doDelete2 = force? doDelete1;
    checkMissing(doDelete2);
    c8 = `as.logical`(doDelete2);
    if c8 then L103() else L13();
  L123():
    goto L18(r71);
  L125():
    wrong19 = force? wrong18;
    checkMissing(wrong19);
    l3 = ld wrong_things;
    c11 = `is.object`(l3);
    if c11 then L127() else L128(wrong19, l3);
  L145():
    st demo_files = r88;
    setdiff2 = ldf setdiff;
    check L146() else D63();
  L168():
    st vigns = r110;
    sym8 = ldf `is.null`;
    base8 = ldf `is.null` in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L169() else L170();
  D63():
    deopt 206 [];
  L13():
    goto L14(NULL);
  L14(r54):
    goto L15(r54);
  L31(r112):
    r113 = `!`(r112);
    c19 = `as.logical`(r113);
    if c19 then L172() else L32(c19);
  L103():
    unlink = ldf unlink;
    check L104() else D37();
  L126(dx6):
    st wrong_things = dx6;
    doDelete3 = ld doDelete;
    check L130() else D52();
  L127():
    dr4 = tryDispatchBuiltin.0("$<-", l3, wrong19);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L129() else L128(wrong19, dr4);
  L128(wrong21, l5):
    r72 = `$<-`(l5, <sym man>, wrong19);
    goto L126(r72);
  L146():
    p30 = prom<V +>{
      all_files4 = ld all_files;
      all_files5 = force? all_files4;
      checkMissing(all_files5);
      return all_files5;
    };
    p31 = prom<V +>{
      sym6 = ldf c;
      base6 = ldf c in base;
      guard6 = `==`.4(sym6, base6);
      if guard6 then L1() else L2();
    L0(r91):
      return r91;
    L1():
      demo_files = ld demo_files;
      demo_files1 = force? demo_files;
      checkMissing(demo_files1);
      c14 = ldf c in base;
      r92 = dyn c14("00Index", demo_files1);
      goto L0(r92);
    L2():
      r90 = dyn base6("00Index", <sym demo_files>);
      goto L0(r90);
    };
    r94 = dyn setdiff2(p30, p31);
    check L147() else D64();
  L169():
    vigns = ld vigns;
    check L171() else D75();
  L170():
    r111 = dyn base8(<sym vigns>);
    goto L31(r111);
  D37():
    deopt 119 [];
  D52():
    deopt 170 [doDelete3];
  D64():
    deopt 209 [r94];
  D75():
    deopt 249 [vigns];
  L32(c21):
    c33 = `as.logical`(c21);
    if c33 then L182() else L34();
  L104():
    p15 = prom<V +>{
      file_path1 = ldf `file.path`;
      p13 = prom<V +>{
        dir9 = ld dir;
        dir10 = force? dir9;
        checkMissing(dir10);
        return dir10;
      };
      p14 = prom<V +>{
        wrong14 = ld wrong;
        wrong15 = force? wrong14;
        checkMissing(wrong15);
        return wrong15;
      };
      r51 = dyn file_path1(p13, "R", p14);
      return r51;
    };
    r53 = dyn unlink(p15);
    check L105() else D38();
  L129():
    dx5 = getTryDispatchBuiltinValue(dr4);
    goto L126(dx5);
  L130():
    doDelete4 = force? doDelete3;
    checkMissing(doDelete4);
    c12 = `as.logical`(doDelete4);
    if c12 then L131() else L20();
  L147():
    st wrong = r94;
    sym7 = ldf length;
    base7 = ldf length in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L148() else L149();
  L171():
    vigns1 = force? vigns;
    checkMissing(vigns1);
    c18 = `==`(vigns1, NULL);
    goto L31(c18);
  L172():
    sym9 = ldf length;
    base9 = ldf length in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L173() else L174();
  D38():
    deopt 121 [r53];
  L20():
    goto L21(NULL);
  L21(r78):
    goto L22(r78);
  L25(r96):
    c15 = `as.logical`(r96);
    if c15 then L152() else L26();
  L33(c24, r115):
    c30 = `as.logical`(r115);
    c31 = `&&`(c24, c30);
    goto L32(c31);
  L34():
    goto L42();
  L42():
    l12 = ld wrong_things;
    class__ = ldf `class<-`;
    check L213() else D92();
  L105():
    goto L14(r53);
  L131():
    unlink1 = ldf unlink;
    check L132() else D53();
  L148():
    wrong26 = ld wrong;
    check L150() else D65();
  L149():
    r95 = dyn base7(<sym wrong>);
    goto L25(r95);
  L173():
    vigns2 = ld vigns;
    check L175() else D76();
  L174():
    r114 = dyn base9(<lang `$`(vigns, docs)>);
    goto L33(c19, r114);
  L182():
    basename = ldf basename;
    check L183() else D78();
  D53():
    deopt 173 [];
  D65():
    deopt 213 [wrong26];
  D76():
    deopt 255 [c19, vigns2];
  D78():
    deopt 262 [];
  D92():
    deopt 314 ["subdir_tests", l12, "subdir_tests"];
  L26():
    goto L29(NULL);
  L29(r105):
    goto L30();
  L132():
    p25 = prom<V +>{
      file_path3 = ldf `file.path`;
      p23 = prom<V +>{
        dir13 = ld dir;
        dir14 = force? dir13;
        checkMissing(dir14);
        return dir14;
      };
      p24 = prom<V +>{
        wrong24 = ld wrong;
        wrong25 = force? wrong24;
        checkMissing(wrong25);
        return wrong25;
      };
      r75 = dyn file_path3(p23, "man", p24);
      return r75;
    };
    r77 = dyn unlink1(p25);
    check L133() else D54();
  L150():
    wrong27 = force? wrong26;
    checkMissing(wrong27);
    length3 = ldf length in base;
    r97 = dyn length3(wrong27);
    check L151() else D66();
  L152():
    wrong28 = ld wrong;
    check L153() else D67();
  L175():
    vigns3 = force? vigns2;
    checkMissing(vigns3);
    c25 = `is.object`(vigns3);
    if c25 then L177() else L178(c19, vigns3);
  L183():
    p37 = prom<V +>{
      vigns6 = ld vigns;
      vigns7 = force? vigns6;
      checkMissing(vigns7);
      c34 = `is.object`(vigns7);
      if c34 then L1() else L2(vigns7);
    L0(dx12):
      return dx12;
    L1():
      dr10 = tryDispatchBuiltin.1("$", vigns7);
      dc5 = getTryDispatchBuiltinDispatched(dr10);
      if dc5 then L3() else L2(dr10);
    L2(vigns9):
      r118 = `$`(vigns9, <sym docs>);
      goto L0(r118);
    L3():
      dx11 = getTryDispatchBuiltinValue(dr10);
      goto L0(dx11);
    };
    r120 = dyn basename(p37);
    check L184() else D79();
  L213():
    r145 = dyn class__(l12, NULL, "subdir_tests");
    check L214() else D93();
  D54():
    deopt 175 [r77];
  D66():
    deopt 216 [r97];
  D67():
    deopt 217 [wrong28];
  D79():
    deopt 264 [r120];
  D93():
    deopt 316 ["subdir_tests", r145];
  L133():
    goto L21(r77);
  L151():
    goto L25(r97);
  L153():
    wrong29 = force? wrong28;
    checkMissing(wrong29);
    l6 = ld wrong_things;
    c16 = `is.object`(l6);
    if c16 then L155() else L156(wrong29, l6);
  L176(c29, dx10):
    length4 = ldf length in base;
    r117 = dyn length4(dx10);
    check L180() else D77();
  L177():
    dr8 = tryDispatchBuiltin.1("$", vigns3);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L179() else L178(c19, dr8);
  L178(c27, vigns5):
    r116 = `$`(vigns5, <sym docs>);
    goto L176(c27, r116);
  L184():
    st vignettes = r120;
    tryCatch = ldf tryCatch;
    check L185() else D80();
  L214():
    st wrong_things = r145;
    wrong_things = ld wrong_things;
    check L215() else D94();
  D77():
    deopt 259 [c29, r117];
  D80():
    deopt 267 [];
  D94():
    deopt 318 [wrong_things];
  L154(dx8):
    st wrong_things = dx8;
    doDelete5 = ld doDelete;
    check L158() else D68();
  L155():
    dr6 = tryDispatchBuiltin.0("$<-", l6, wrong29);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L157() else L156(wrong29, dr6);
  L156(wrong31, l8):
    r98 = `$<-`(l8, <sym demo>, wrong29);
    goto L154(r98);
  L179():
    dx9 = getTryDispatchBuiltinValue(dr8);
    goto L176(c19, dx9);
  L180():
    goto L33(c29, r117);
  L185():
    p41 = prom<V +>{
      _package_vignettes_via_call_to_R1 = ldf `.package_vignettes_via_call_to_R`;
      p38 = prom<V +>{
        dir21 = ld dir;
        dir22 = force? dir21;
        checkMissing(dir22);
        return dir22;
      };
      p39 = prom<V +>{
        subdir2 = ld subdir;
        subdir3 = force? subdir2;
        checkMissing(subdir3);
        return subdir3;
      };
      r123 = dyn _package_vignettes_via_call_to_R1[dir, subdirs, output](p38, p39, TRUE);
      st vigns = r123;
      sym10 = ldf c;
      base10 = ldf c in base;
      guard10 = `==`.4(sym10, base10);
      if guard10 then L1() else L2();
    L0(r125):
      st vignettes = r125;
      invisible.0();
      return r125;
    L1():
      vignettes = ld vignettes;
      vignettes1 = force? vignettes;
      checkMissing(vignettes1);
      basename1 = ldf basename;
      p40 = prom<V +>{
        vigns10 = ld vigns;
        vigns11 = force? vigns10;
        checkMissing(vigns11);
        c35 = `is.object`(vigns11);
        if c35 then L1() else L2(vigns11);
      L0(dx14):
        return dx14;
      L1():
        dr12 = tryDispatchBuiltin.1("$", vigns11);
        dc6 = getTryDispatchBuiltinDispatched(dr12);
        if dc6 then L3() else L2(dr12);
      L2(vigns13):
        r126 = `$`(vigns13, <sym outputs>);
        goto L0(r126);
      L3():
        dx13 = getTryDispatchBuiltinValue(dr12);
        goto L0(dx13);
      };
      r128 = dyn basename1(p40);
      c36 = ldf c in base;
      r129 = dyn c36(vignettes1, r128);
      goto L0(r129);
    L2():
      r124 = dyn base10(<sym vignettes>, <lang basename(`$`(vigns, outputs))>);
      goto L0(r124);
    };
    p42 = prom<V +>{
      r131 = clos inner3438750739;
      return r131;
    };
    r133 = dyn tryCatch[, error](p41, p42);
    check L186() else D81();
  L215():
    wrong_things1 = force? wrong_things;
    checkMissing(wrong_things1);
    popenv;
    return wrong_things1;
  D68():
    deopt 222 [doDelete5];
  D81():
    deopt 271 [r133];
  L157():
    dx7 = getTryDispatchBuiltinValue(dr6);
    goto L154(dx7);
  L158():
    doDelete6 = force? doDelete5;
    checkMissing(doDelete6);
    c17 = `as.logical`(doDelete6);
    if c17 then L159() else L27();
  L186():
    grep = ldf grep;
    check L187() else D82();
  D82():
    deopt 273 [];
  L27():
    goto L28(NULL);
  L28(r104):
    goto L29(r104);
  L159():
    unlink2 = ldf unlink;
    check L160() else D69();
  L187():
    p43 = prom<V +>{
      vignettes2 = ld vignettes;
      vignettes3 = force? vignettes2;
      checkMissing(vignettes3);
      return vignettes3;
    };
    r135 = dyn grep("^[ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz][ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789._-]+$", p43);
    check L188() else D83();
  D69():
    deopt 225 [];
  D83():
    deopt 276 [r135];
  L160():
    p34 = prom<V +>{
      file_path5 = ldf `file.path`;
      p32 = prom<V +>{
        dir17 = ld dir;
        dir18 = force? dir17;
        checkMissing(dir18);
        return dir18;
      };
      p33 = prom<V +>{
        wrong34 = ld wrong;
        wrong35 = force? wrong34;
        checkMissing(wrong35);
        return wrong35;
      };
      r101 = dyn file_path5(p32, "demo", p33);
      return r101;
    };
    r103 = dyn unlink2(p34);
    check L161() else D70();
  L188():
    st OK = r135;
    vignettes4 = ld vignettes;
    check L189() else D84();
  D70():
    deopt 227 [r103];
  D84():
    deopt 278 [vignettes4];
  L161():
    goto L28(r103);
  L189():
    vignettes5 = force? vignettes4;
    checkMissing(vignettes5);
    st wrong = vignettes5;
    sym11 = ldf length;
    base11 = ldf length in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L190() else L191();
  L35(r137):
    c37 = `as.logical`(r137);
    if c37 then L194() else L36();
  L190():
    OK = ld OK;
    check L192() else D85();
  L191():
    r136 = dyn base11(<sym OK>);
    goto L35(r136);
  D85():
    deopt 283 [OK];
  L36():
    goto L38();
  L38():
    sym12 = ldf length;
    base12 = ldf length in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L201() else L202();
  L192():
    OK1 = force? OK;
    checkMissing(OK1);
    length5 = ldf length in base;
    r138 = dyn length5(OK1);
    check L193() else D86();
  L194():
    wrong36 = ld wrong;
    check L195() else D87();
  D86():
    deopt 286 [r138];
  D87():
    deopt 287 [wrong36];
  L39(r142):
    c39 = `as.logical`(r142);
    if c39 then L205() else L40();
  L193():
    goto L35(r138);
  L195():
    wrong37 = force? wrong36;
    checkMissing(wrong37);
    c38 = `is.object`(wrong37);
    if c38 then L196() else L197(wrong37);
  L201():
    wrong40 = ld wrong;
    check L203() else D89();
  L202():
    r141 = dyn base12(<sym wrong>);
    goto L39(r141);
  D89():
    deopt 298 [wrong40];
  L37(dx16):
    st wrong = dx16;
    goto L38();
  L40():
    goto L41(NULL);
  L41(wrong48):
    goto L42();
  L196():
    dr14 = tryDispatchBuiltin.1("[", wrong37);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L198() else L197(dr14);
  L197(wrong39):
    OK2 = ld OK;
    check L199() else D88();
  L203():
    wrong41 = force? wrong40;
    checkMissing(wrong41);
    length6 = ldf length in base;
    r143 = dyn length6(wrong41);
    check L204() else D90();
  L205():
    wrong42 = ld wrong;
    check L206() else D91();
  D88():
    deopt 289 [wrong39, OK2];
  D90():
    deopt 301 [r143];
  D91():
    deopt 302 [wrong42];
  L198():
    dx15 = getTryDispatchBuiltinValue(dr14);
    goto L37(dx15);
  L199():
    OK3 = force? OK2;
    checkMissing(OK3);
    r139 = `-`(<missing>, OK3);
    __1 = ldf `[` in base;
    r140 = dyn __1(wrong39, r139);
    goto L37(r140);
  L204():
    goto L39(r143);
  L206():
    wrong43 = force? wrong42;
    checkMissing(wrong43);
    l9 = ld wrong_things;
    c40 = `is.object`(l9);
    if c40 then L208() else L209(wrong43, l9);
  L207(wrong47, dx19):
    st wrong_things = dx19;
    goto L41(wrong47);
  L208():
    dr16 = tryDispatchBuiltin.0("$<-", l9, wrong43);
    dc8 = getTryDispatchBuiltinDispatched(dr16);
    if dc8 then L210() else L209(wrong43, dr16);
  L209(wrong45, l11):
    r144 = `$<-`(l11, <sym `inst/doc`>, wrong43);
    goto L207(wrong45, r144);
  L210():
    dx18 = getTryDispatchBuiltinValue(dr16);
    goto L207(wrong43, dx18);
  }
}
fun inner3077716681(dir) {
  (reg dir:*) -+> V { var dir:*, reg list_files:cls, reg dir1:*, reg dir2:V, reg p:p(V +), reg r1:V, reg sym:cls, reg base:cls, reg guard:L, reg r2:V, reg r3:V, reg d:*, reg d1:V, reg length:cls, reg r4:V, reg r5:V, reg c:L, reg d2:*, reg d3:V, reg _in_:cls, reg basename:cls, reg dir3:*, reg dir4:V, reg p1:p(V +), reg r9:V, reg p2:p(V +), reg sym1:cls, reg base1:cls, reg guard1:L, reg r11:V, reg r12:V, reg c1:cls, reg r13:V, reg p3:p(V +), reg r15:V, reg c2:L, reg OS_subdirs:*, reg OS_subdirs1:V, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c3:L, reg x:V, reg file_path:cls, reg dir5:*, reg dir6:V, reg p4:p(V +), reg os:*, reg os1:V, reg p5:p(V +), reg r18:V, reg dir_exists:cls, reg os_dir:*, reg os_dir1:V, reg p6:p(V +), reg r20:V, reg c4:L, reg sym2:cls, reg base2:cls, reg guard2:L, reg r21:V, reg i9:I, reg r22:V, reg d4:*, reg d5:V, reg file_path1:cls, reg os2:*, reg os3:V, reg p7:p(V +), reg list_files1:cls, reg os_dir2:*, reg os_dir3:V, reg p8:p(V +), reg r25:V, reg p9:p(V +), reg r27:V, reg c5:cls, reg r28:V, reg i10:I, reg d6:*, reg d7:V, reg c6:L, reg d9:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg file_test:cls, reg file_path2:cls, reg dir7:*, reg dir8:V, reg p10:p(V +), reg d10:*, reg d11:V, reg p11:p(V +), reg r32:V, reg p12:p(V +), reg r34:V, reg __:cls, reg r35:V |
    mkenv;
    st dir = dir;
    list_files = ldf `list.files`;
    check L11() else D0();
  D0():
    deopt 1 [];
  L11():
    p = prom<V +>{
      dir1 = ld dir;
      dir2 = force? dir1;
      checkMissing(dir2);
      return dir2;
    };
    r1 = dyn list_files[, `all.files`, `full.names`](p, TRUE, FALSE);
    check L12() else D1();
  D1():
    deopt 7 [r1];
  L12():
    st d = r1;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L13() else L14();
  L0(r3):
    r5 = `!`(r3);
    c = `as.logical`(r5);
    if c then L17() else L1();
  L13():
    d = ld d;
    check L15() else D2();
  L14():
    r2 = dyn base(<sym d>);
    goto L0(r2);
  D2():
    deopt 11 [d];
  L1():
    _in_ = ldf `%in%`;
    check L21() else D5();
  L15():
    d1 = force? d;
    checkMissing(d1);
    length = ldf length in base;
    r4 = dyn length(d1);
    check L16() else D3();
  L17():
    d2 = ld d;
    check L18() else D4();
  D3():
    deopt 14 [r4];
  D4():
    deopt 16 [d2];
  D5():
    deopt 22 [];
  L16():
    goto L0(r4);
  L18():
    d3 = force? d2;
    checkMissing(d3);
    popenv;
    return d3;
  L21():
    p2 = prom<V +>{
      basename = ldf basename;
      p1 = prom<V +>{
        dir3 = ld dir;
        dir4 = force? dir3;
        checkMissing(dir4);
        return dir4;
      };
      r9 = dyn basename(p1);
      return r9;
    };
    p3 = prom<V +>{
      sym1 = ldf c;
      base1 = ldf c in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r12):
      return r12;
    L1():
      c1 = ldf c in base;
      r13 = dyn c1("R", "man");
      goto L0(r13);
    L2():
      r11 = dyn base1("R", "man");
      goto L0(r11);
    };
    r15 = dyn _in_(p2, p3);
    check L22() else D6();
  D6():
    deopt 25 [r15];
  L22():
    c2 = `as.logical`(r15);
    if c2 then L23() else L3();
  L3():
    goto L9();
  L9():
    d6 = ld d;
    check L39() else D16();
  L23():
    OS_subdirs = ld OS_subdirs;
    check L24() else D7();
  D7():
    deopt 26 [OS_subdirs];
  D16():
    deopt 57 [d6];
  L24():
    OS_subdirs1 = force? OS_subdirs;
    checkMissing(OS_subdirs1);
    s = toForSeq(OS_subdirs1);
    l = length(s);
    i = 0;
    goto L4(i);
  L39():
    d7 = force? d6;
    checkMissing(d7);
    c6 = `is.object`(d7);
    if c6 then L40() else L41(d7);
  L4(i1):
    i2 = `+`.1(i1, 1);
    c3 = `<`.1(l, i2);
    if c3 then L25() else L8();
  L10(dx1):
    popenv;
    return dx1;
  L40():
    dr = tryDispatchBuiltin.1("[", d7);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L42() else L41(dr);
  L41(d9):
    file_test = ldf file_test;
    check L43() else D17();
  D17():
    deopt 60 [d9];
  L8():
    x = `[[`(s, i2, NULL, TRUE);
    st os = x;
    file_path = ldf `file.path`;
    check L26() else D8();
  L25():
    goto L9();
  L42():
    dx = getTryDispatchBuiltinValue(dr);
    goto L10(dx);
  L43():
    p12 = prom<V +>{
      file_path2 = ldf `file.path`;
      p10 = prom<V +>{
        dir7 = ld dir;
        dir8 = force? dir7;
        checkMissing(dir8);
        return dir8;
      };
      p11 = prom<V +>{
        d10 = ld d;
        d11 = force? d10;
        checkMissing(d11);
        return d11;
      };
      r32 = dyn file_path2(p10, p11);
      return r32;
    };
    r34 = dyn file_test("-f", p12);
    check L44() else D18();
  D8():
    deopt 29 [i2];
  D18():
    deopt 63 [d9, r34];
  L26():
    p4 = prom<V +>{
      dir5 = ld dir;
      dir6 = force? dir5;
      checkMissing(dir6);
      return dir6;
    };
    p5 = prom<V +>{
      os = ld os;
      os1 = force? os;
      checkMissing(os1);
      return os1;
    };
    r18 = dyn file_path(p4, p5);
    check L27() else D9();
  L44():
    __ = ldf `[` in base;
    r35 = dyn __(d9, r34);
    goto L10(r35);
  D9():
    deopt 32 [i2, r18];
  L27():
    st os_dir = r18;
    dir_exists = ldf `dir.exists`;
    check L28() else D10();
  D10():
    deopt 35 [i2];
  L28():
    p6 = prom<V +>{
      os_dir = ld os_dir;
      os_dir1 = force? os_dir;
      checkMissing(os_dir1);
      return os_dir1;
    };
    r20 = dyn dir_exists(p6);
    check L29() else D11();
  D11():
    deopt 37 [i2, r20];
  L29():
    c4 = `as.logical`(r20);
    if c4 then L30() else L5();
  L5():
    goto L7(i2);
  L7(i10):
    goto L4(i10);
  L30():
    sym2 = ldf c;
    base2 = ldf c in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L31() else L32();
  L6(i9, r22):
    st d = r22;
    goto L7(i9);
  L31():
    d4 = ld d;
    check L33() else D12();
  L32():
    r21 = dyn base2(<sym d>, <lang file.path(os, list.files(os_dir, all.files=TRUE, full.names=FALSE))>);
    goto L6(i2, r21);
  D12():
    deopt 40 [i2, d4];
  L33():
    d5 = force? d4;
    checkMissing(d5);
    file_path1 = ldf `file.path`;
    check L34() else D13();
  D13():
    deopt 43 [i2];
  L34():
    p7 = prom<V +>{
      os2 = ld os;
      os3 = force? os2;
      checkMissing(os3);
      return os3;
    };
    p9 = prom<V +>{
      list_files1 = ldf `list.files`;
      p8 = prom<V +>{
        os_dir2 = ld os_dir;
        os_dir3 = force? os_dir2;
        checkMissing(os_dir3);
        return os_dir3;
      };
      r25 = dyn list_files1[, `all.files`, `full.names`](p8, TRUE, FALSE);
      return r25;
    };
    r27 = dyn file_path1(p7, p9);
    check L35() else D14();
  D14():
    deopt 46 [i2, r27];
  L35():
    c5 = ldf c in base;
    r28 = dyn c5(d5, r27);
    check L36() else D15();
  D15():
    deopt 48 [i2, r28];
  L36():
    goto L6(i2, r28);
  }
}
fun inner3438750739(ex) {
  (reg ex:*) -+> V { var ex:* |
    mkenv;
    st ex = ex;
    popenv;
    return NULL;
  }
}