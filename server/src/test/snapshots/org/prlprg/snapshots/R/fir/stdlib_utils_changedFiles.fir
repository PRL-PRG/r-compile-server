fun main() {
  () -+> V { reg r:cls, reg tempfile:cls, reg r1:V, reg dir_create:cls, reg dir:*, reg dir1:V, reg p:p(V +), reg r3:V, reg writeBin:cls, reg file_path:cls, reg dir2:*, reg dir3:V, reg p1:p(V +), reg r5:V, reg p2:p(V +), reg r7:V, reg writeBin1:cls, reg file_path1:cls, reg dir4:*, reg dir5:V, reg p3:p(V +), reg r9:V, reg p4:p(V +), reg r11:V, reg dir_create1:cls, reg file_path2:cls, reg dir6:*, reg dir7:V, reg p5:p(V +), reg r13:V, reg p6:p(V +), reg r15:V, reg fileSnapshot:cls, reg dir8:*, reg dir9:V, reg p7:p(V +), reg tempfile1:cls, reg r17:V, reg p8:p(V +), reg r19:V, reg Sys_sleep:cls, reg r20:V, reg writeBin2:cls, reg p9:p(V +), reg file_path3:cls, reg dir10:*, reg dir11:V, reg p10:p(V +), reg r23:V, reg p11:p(V +), reg r25:V, reg changedFiles:cls, reg snapshot:*, reg snapshot1:V, reg p12:p(V +), reg r27:V, reg changedFiles1:cls, reg snapshot2:*, reg snapshot3:V, reg p13:p(V +), reg r29:V, reg c:L, reg r31:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r32:V |
    mkenv;
    r = clos inner2708492212;
    st changedFiles = r;
    tempfile = ldf tempfile;
    check L0() else D0();
  D0():
    deopt 4 [];
  L0():
    r1 = dyn tempfile();
    check L1() else D1();
  D1():
    deopt 5 [r1];
  L1():
    st dir = r1;
    dir_create = ldf `dir.create`;
    check L2() else D2();
  D2():
    deopt 8 [];
  L2():
    p = prom<V +>{
      dir = ld dir;
      dir1 = force? dir;
      checkMissing(dir1);
      return dir1;
    };
    r3 = dyn dir_create(p);
    check L3() else D3();
  D3():
    deopt 10 [r3];
  L3():
    writeBin = ldf writeBin;
    check L4() else D4();
  D4():
    deopt 12 [];
  L4():
    p2 = prom<V +>{
      file_path = ldf `file.path`;
      p1 = prom<V +>{
        dir2 = ld dir;
        dir3 = force? dir2;
        checkMissing(dir3);
        return dir3;
      };
      r5 = dyn file_path(p1, "file1");
      return r5;
    };
    r7 = dyn writeBin(1, p2);
    check L5() else D5();
  D5():
    deopt 15 [r7];
  L5():
    writeBin1 = ldf writeBin;
    check L6() else D6();
  D6():
    deopt 17 [];
  L6():
    p4 = prom<V +>{
      file_path1 = ldf `file.path`;
      p3 = prom<V +>{
        dir4 = ld dir;
        dir5 = force? dir4;
        checkMissing(dir5);
        return dir5;
      };
      r9 = dyn file_path1(p3, "file2");
      return r9;
    };
    r11 = dyn writeBin1(2, p4);
    check L7() else D7();
  D7():
    deopt 20 [r11];
  L7():
    dir_create1 = ldf `dir.create`;
    check L8() else D8();
  D8():
    deopt 22 [];
  L8():
    p6 = prom<V +>{
      file_path2 = ldf `file.path`;
      p5 = prom<V +>{
        dir6 = ld dir;
        dir7 = force? dir6;
        checkMissing(dir7);
        return dir7;
      };
      r13 = dyn file_path2(p5, "dir");
      return r13;
    };
    r15 = dyn dir_create1(p6);
    check L9() else D9();
  D9():
    deopt 24 [r15];
  L9():
    fileSnapshot = ldf fileSnapshot;
    check L10() else D10();
  D10():
    deopt 26 [];
  L10():
    p7 = prom<V +>{
      dir8 = ld dir;
      dir9 = force? dir8;
      checkMissing(dir9);
      return dir9;
    };
    p8 = prom<V +>{
      tempfile1 = ldf tempfile;
      r17 = dyn tempfile1("timestamp");
      return r17;
    };
    r19 = dyn fileSnapshot[, timestamp, md5sum](p7, p8, TRUE);
    check L11() else D11();
  D11():
    deopt 32 [r19];
  L11():
    st snapshot = r19;
    Sys_sleep = ldf `Sys.sleep`;
    check L12() else D12();
  D12():
    deopt 35 [];
  L12():
    r20 = dyn Sys_sleep(0.01);
    check L13() else D13();
  D13():
    deopt 37 [r20];
  L13():
    writeBin2 = ldf writeBin;
    check L14() else D14();
  D14():
    deopt 39 [];
  L14():
    p9 = prom<V +>{
      return <int 3, 4>;
    };
    p11 = prom<V +>{
      file_path3 = ldf `file.path`;
      p10 = prom<V +>{
        dir10 = ld dir;
        dir11 = force? dir10;
        checkMissing(dir11);
        return dir11;
      };
      r23 = dyn file_path3(p10, "file2");
      return r23;
    };
    r25 = dyn writeBin2(p9, p11);
    check L15() else D15();
  D15():
    deopt 42 [r25];
  L15():
    changedFiles = ldf changedFiles;
    check L16() else D16();
  D16():
    deopt 44 [];
  L16():
    p12 = prom<V +>{
      snapshot = ld snapshot;
      snapshot1 = force? snapshot;
      checkMissing(snapshot1);
      return snapshot1;
    };
    r27 = dyn changedFiles(p12);
    check L17() else D17();
  D17():
    deopt 46 [r27];
  L17():
    changedFiles1 = ldf changedFiles;
    check L18() else D18();
  D18():
    deopt 48 [];
  L18():
    p13 = prom<V +>{
      snapshot2 = ld snapshot;
      snapshot3 = force? snapshot2;
      checkMissing(snapshot3);
      return snapshot3;
    };
    r29 = dyn changedFiles1(p13);
    check L19() else D19();
  D19():
    deopt 50 [r29];
  L19():
    c = `is.object`(r29);
    if c then L21() else L22(r29);
  L20(dx1):
    popenv;
    return dx1;
  L21():
    dr = tryDispatchBuiltin.1("$", r29);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L23() else L22(dr);
  L22(r31):
    r32 = `$`(r31, <sym changes>);
    goto L20(r32);
  L23():
    dx = getTryDispatchBuiltinValue(dr);
    goto L20(dx);
  }
}
fun inner2708492212(before, after, path, timestamp, `check.file.info`, md5sum, digest, `full.names`, `...`) {
  (reg before:*, reg after:*, reg path:*, reg timestamp:*, reg check_file_info:*, reg md5sum:*, reg digest:*, reg full_names:*, reg ddd:dots) -+> V { var before:*, var after:*, var path:*, reg path_isMissing:L, reg path_orDefault:*, reg before1:*, reg before2:V, reg c:L, reg before4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r:V, reg p:p(V +), var timestamp:*, reg timestamp_isMissing:L, reg timestamp_orDefault:*, reg before5:*, reg before6:V, reg c1:L, reg before8:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r2:V, reg p1:p(V +), var `check.file.info`:*, reg check_file_info_isMissing:L, reg check_file_info_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r4:V, reg r5:V, reg c2:cls, reg r6:V, reg p2:p(V +), var md5sum:*, reg md5sum_isMissing:L, reg md5sum_orDefault:*, reg before9:*, reg before10:V, reg c3:L, reg before12:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg r8:V, reg p3:p(V +), var digest:*, reg digest_isMissing:L, reg digest_orDefault:*, reg before13:*, reg before14:V, reg c4:L, reg before16:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg r10:V, reg p4:p(V +), var `full.names`:*, reg full_names_isMissing:L, reg full_names_orDefault:*, reg before17:*, reg before18:V, reg c5:L, reg before20:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg r12:V, reg p5:p(V +), var `...`:dots?, reg stopifnot:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r14:V, reg r15:V, reg before21:*, reg before22:V, reg inherits:cls, reg r16:V, reg p6:p(V +), reg r18:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r19:V, reg r20:V, reg missing:cls, reg r21:V, reg c6:L, reg sym3:cls, reg base3:cls, reg guard3:L, reg r22:V, reg r23:V, reg check_file_info1:*, reg check_file_info2:V, reg length:cls, reg r24:V, reg r25:V, reg c7:L, reg c9:V, reg before23:*, reg before24:V, reg c10:L, reg c12:L, reg before26:V, reg dr10:V, reg dc5:L, reg dx10:V, reg c14:L, reg dx11:V, reg r26:V, reg c15:L, reg c16:V, reg before27:*, reg before28:V, reg c18:L, reg before30:V, reg dr12:V, reg dc6:L, reg dx12:V, reg dx13:V, reg r27:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r28:V, reg r29:V, reg list:cls, reg ddd1:dots?, reg r30:V, reg newargs:*, reg newargs1:V, reg l:*, reg c19:L, reg newargs3:V, reg l2:*, reg dr14:V, reg dc7:L, reg dx14:V, reg dx15:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r31:V, reg newargs10:V, reg l5:*, reg newargs11:V, reg r32:V, reg newargs12:*, reg newargs13:V, reg names:cls, reg r33:V, reg ___:cls, reg r34:V, reg do_call:cls, reg fileSnapshot:*, reg fileSnapshot1:V, reg p7:p(V +), reg sym6:cls, reg base6:cls, reg guard6:L, reg r36:V, reg r37:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r38:V, reg r39:V, reg path1:*, reg path2:V, reg get_file_info:*, reg get_file_info1:V, reg md5sum1:*, reg md5sum2:V, reg digest1:*, reg digest2:V, reg full_names1:*, reg full_names2:V, reg list1:cls, reg r40:V, reg args:*, reg args1:V, reg c20:cls, reg r41:V, reg p8:p(V +), reg r43:V, reg stopifnot1:cls, reg sym8:cls, reg base8:cls, reg guard8:L, reg r45:V, reg r46:V, reg after1:*, reg after2:V, reg inherits1:cls, reg r47:V, reg p9:p(V +), reg r49:V, reg before31:*, reg before32:V, reg c21:L, reg before34:V, reg dr16:V, reg dc8:L, reg dx16:V, reg dx17:V, reg r50:V, reg after3:*, reg after4:V, reg c22:L, reg after6:V, reg dr18:V, reg dc9:L, reg dx18:V, reg dx19:V, reg r51:V, reg rownames:cls, reg preinfo:*, reg preinfo1:V, reg p10:p(V +), reg r53:V, reg rownames1:cls, reg postinfo:*, reg postinfo1:V, reg p11:p(V +), reg r55:V, reg setdiff:cls, reg postnames:*, reg postnames1:V, reg p12:p(V +), reg prenames:*, reg prenames1:V, reg p13:p(V +), reg r58:V, reg setdiff1:cls, reg prenames2:*, reg prenames3:V, reg p14:p(V +), reg postnames2:*, reg postnames3:V, reg p15:p(V +), reg r61:V, reg intersect:cls, reg prenames4:*, reg prenames5:V, reg p16:p(V +), reg postnames4:*, reg postnames5:V, reg p17:p(V +), reg r64:V, reg before35:*, reg before36:V, reg c23:L, reg before38:V, reg dr20:V, reg dc10:L, reg dx20:V, reg dx21:V, reg r65:V, reg r66:V, reg c24:L, reg c25:V, reg after7:*, reg after8:V, reg c27:L, reg c29:L, reg after10:V, reg dr22:V, reg dc11:L, reg dx22:V, reg c31:L, reg dx23:V, reg r67:V, reg r68:V, reg c32:L, reg c33:V, reg c35:L, reg sym9:cls, reg base9:cls, reg guard9:L, reg r70:V, reg r71:V, reg check_file_info3:*, reg check_file_info4:V, reg length1:cls, reg r72:V, reg c36:L, reg preinfo2:*, reg preinfo3:V, reg c37:L, reg preinfo5:V, reg dr24:V, reg dc12:L, reg dx24:V, reg dx25:V, reg common:*, reg common1:V, reg check_file_info5:*, reg check_file_info6:V, reg __:cls, reg r73:V, reg postinfo2:*, reg postinfo3:V, reg c38:L, reg postinfo5:V, reg dr26:V, reg dc13:L, reg dx26:V, reg dx27:V, reg common2:*, reg common3:V, reg check_file_info7:*, reg check_file_info8:V, reg __1:cls, reg r74:V, reg pre:*, reg pre1:V, reg post:*, reg post1:V, reg r75:V, reg matrix:cls, reg logical:cls, reg r77:V, reg p18:p(V +), reg sym10:cls, reg base10:cls, reg guard10:L, reg r79:V, reg r80:V, reg common4:*, reg common5:V, reg length2:cls, reg r81:V, reg p19:p(V +), reg sym11:cls, reg base11:cls, reg guard11:L, reg r83:V, reg r84:V, reg common6:*, reg common7:V, reg character:cls, reg r85:V, reg list2:cls, reg r86:V, reg p20:p(V +), reg r88:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r89:V, reg r90:V, reg timestamp1:*, reg timestamp2:V, reg length3:cls, reg r91:V, reg c39:L, reg file_exists:cls, reg timestamp3:*, reg timestamp4:V, reg p21:p(V +), reg r93:V, reg c40:L, reg after11:*, reg after12:V, reg c41:L, reg after14:V, reg dr28:V, reg dc14:L, reg dx28:V, reg dx29:V, reg r94:V, reg c42:L, reg common8:*, reg common9:V, reg common10:V, reg file_path:cls, reg after15:*, reg after16:V, reg c43:L, reg after18:V, reg dr30:V, reg dc15:L, reg dx30:V, reg dx31:V, reg r95:V, reg p22:p(V +), reg common11:*, reg common12:V, reg p23:p(V +), reg r98:V, reg cbind:cls, reg changes:*, reg changes1:V, reg p24:p(V +), reg file_test:cls, reg fullnames:*, reg fullnames1:V, reg p25:p(V +), reg timestamp5:*, reg timestamp6:V, reg p26:p(V +), reg r102:V, reg p27:p(V +), reg r104:V, reg r105:V, reg warning:cls, reg r106:V, reg md5sum3:*, reg md5sum4:V, reg c44:L, reg preinfo6:*, reg preinfo7:V, reg c45:L, reg preinfo9:V, reg dr32:V, reg dc16:L, reg dx32:V, reg dx33:V, reg common13:*, reg common14:V, reg __2:cls, reg r108:V, reg postinfo6:*, reg postinfo7:V, reg c46:L, reg postinfo9:V, reg dr34:V, reg dc17:L, reg dx34:V, reg dx35:V, reg common15:*, reg common16:V, reg __3:cls, reg r109:V, reg cbind1:cls, reg changes2:*, reg changes3:V, reg p28:p(V +), reg pre2:*, reg pre3:V, reg post2:*, reg post3:V, reg r111:V, reg p29:p(V +), reg r113:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r115:V, reg r116:V, reg digest3:*, reg digest4:V, reg c47:V, reg r117:V, reg c48:L, reg preinfo10:*, reg preinfo11:V, reg c49:L, reg preinfo13:V, reg dr36:V, reg dc18:L, reg dx36:V, reg dx37:V, reg common17:*, reg common18:V, reg __4:cls, reg r118:V, reg postinfo10:*, reg postinfo11:V, reg c50:L, reg postinfo13:V, reg dr38:V, reg dc19:L, reg dx38:V, reg dx39:V, reg common19:*, reg common20:V, reg __5:cls, reg r119:V, reg cbind2:cls, reg changes4:*, reg changes5:V, reg p30:p(V +), reg pre4:*, reg pre5:V, reg post4:*, reg post5:V, reg r121:V, reg p31:p(V +), reg r123:V, reg rownames2:cls, reg changes6:*, reg changes7:V, reg p32:p(V +), reg r126:V, reg c51:L, reg r128:V, reg dr40:V, reg dc20:L, reg dx40:V, reg dx41:V, reg rowSums:cls, reg changes8:*, reg changes9:V, reg p33:p(V +), reg r130:V, reg r131:V, reg __6:cls, reg r132:V, reg structure:cls, reg sym14:cls, reg base14:cls, reg guard14:L, reg r133:V, reg r134:V, reg added:*, reg added1:V, reg deleted:*, reg deleted1:V, reg changed:*, reg changed1:V, reg setdiff2:cls, reg common21:*, reg common22:V, reg p34:p(V +), reg changed2:*, reg changed3:V, reg p35:p(V +), reg r137:V, reg changes10:*, reg changes11:V, reg list3:cls, reg r138:V, reg p36:p(V +), reg r140:V |
    mkenv;
    st before = before;
    st after = after;
    path_isMissing = missing.0(path);
    if path_isMissing then L0() else L1(path);
  L0():
    p = prom<V +>{
      before1 = ld before;
      before2 = force? before1;
      checkMissing(before2);
      c = `is.object`(before2);
      if c then L1() else L2(before2);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("$", before2);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(before4):
      r = `$`(before4, <sym path>);
      goto L0(r);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    goto L1(p);
  L1(path_orDefault):
    st path = path_orDefault;
    timestamp_isMissing = missing.0(timestamp);
    if timestamp_isMissing then L2() else L3(timestamp);
  L2():
    p1 = prom<V +>{
      before5 = ld before;
      before6 = force? before5;
      checkMissing(before6);
      c1 = `is.object`(before6);
      if c1 then L1() else L2(before6);
    L0(dx3):
      return dx3;
    L1():
      dr2 = tryDispatchBuiltin.1("$", before6);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L3() else L2(dr2);
    L2(before8):
      r2 = `$`(before8, <sym timestamp>);
      goto L0(r2);
    L3():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L0(dx2);
    };
    goto L3(p1);
  L3(timestamp_orDefault):
    st timestamp = timestamp_orDefault;
    check_file_info_isMissing = missing.0(check_file_info);
    if check_file_info_isMissing then L4() else L5(check_file_info);
  L4():
    p2 = prom<V +>{
      sym = ldf c;
      base = ldf c in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r5):
      return r5;
    L1():
      c2 = ldf c in base;
      r6 = dyn c2("size", "isdir", "mode", "mtime");
      goto L0(r6);
    L2():
      r4 = dyn base("size", "isdir", "mode", "mtime");
      goto L0(r4);
    };
    goto L5(p2);
  L5(check_file_info_orDefault):
    st `check.file.info` = check_file_info_orDefault;
    md5sum_isMissing = missing.0(md5sum);
    if md5sum_isMissing then L6() else L7(md5sum);
  L6():
    p3 = prom<V +>{
      before9 = ld before;
      before10 = force? before9;
      checkMissing(before10);
      c3 = `is.object`(before10);
      if c3 then L1() else L2(before10);
    L0(dx5):
      return dx5;
    L1():
      dr4 = tryDispatchBuiltin.1("$", before10);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L3() else L2(dr4);
    L2(before12):
      r8 = `$`(before12, <sym md5sum>);
      goto L0(r8);
    L3():
      dx4 = getTryDispatchBuiltinValue(dr4);
      goto L0(dx4);
    };
    goto L7(p3);
  L7(md5sum_orDefault):
    st md5sum = md5sum_orDefault;
    digest_isMissing = missing.0(digest);
    if digest_isMissing then L8() else L9(digest);
  L8():
    p4 = prom<V +>{
      before13 = ld before;
      before14 = force? before13;
      checkMissing(before14);
      c4 = `is.object`(before14);
      if c4 then L1() else L2(before14);
    L0(dx7):
      return dx7;
    L1():
      dr6 = tryDispatchBuiltin.1("$", before14);
      dc3 = getTryDispatchBuiltinDispatched(dr6);
      if dc3 then L3() else L2(dr6);
    L2(before16):
      r10 = `$`(before16, <sym digest>);
      goto L0(r10);
    L3():
      dx6 = getTryDispatchBuiltinValue(dr6);
      goto L0(dx6);
    };
    goto L9(p4);
  L9(digest_orDefault):
    st digest = digest_orDefault;
    full_names_isMissing = missing.0(full_names);
    if full_names_isMissing then L10() else L11(full_names);
  L10():
    p5 = prom<V +>{
      before17 = ld before;
      before18 = force? before17;
      checkMissing(before18);
      c5 = `is.object`(before18);
      if c5 then L1() else L2(before18);
    L0(dx9):
      return dx9;
    L1():
      dr8 = tryDispatchBuiltin.1("$", before18);
      dc4 = getTryDispatchBuiltinDispatched(dr8);
      if dc4 then L3() else L2(dr8);
    L2(before20):
      r12 = `$`(before20, <sym full.names>);
      goto L0(r12);
    L3():
      dx8 = getTryDispatchBuiltinValue(dr8);
      goto L0(dx8);
    };
    goto L11(p5);
  L11(full_names_orDefault):
    st `full.names` = full_names_orDefault;
    st `...` = ddd;
    stopifnot = ldf stopifnot;
    check L45() else D0();
  D0():
    deopt 1 [];
  L45():
    p6 = prom<V +>{
      sym1 = ldf inherits;
      base1 = ldf inherits in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r15):
      return r15;
    L1():
      before21 = ld before;
      before22 = force? before21;
      checkMissing(before22);
      inherits = ldf inherits in base;
      r16 = dyn inherits(before22, "fileSnapshot", FALSE);
      goto L0(r16);
    L2():
      r14 = dyn base1(<sym before>, "fileSnapshot");
      goto L0(r14);
    };
    r18 = dyn stopifnot(p6);
    check L46() else D1();
  D1():
    deopt 3 [r18];
  L46():
    sym2 = ldf missing;
    base2 = ldf missing in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L47() else L48();
  L12(r20):
    c6 = `as.logical`(r20);
    if c6 then L49() else L13();
  L47():
    missing = ldf missing in base;
    r21 = dyn missing(<sym after>);
    goto L12(r21);
  L48():
    r19 = dyn base2(<sym after>);
    goto L12(r19);
  L13():
    goto L19();
  L19():
    stopifnot1 = ldf stopifnot;
    check L81() else D13();
  L49():
    sym3 = ldf length;
    base3 = ldf length in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L50() else L51();
  D13():
    deopt 50 [];
  L14(r23):
    r25 = `>`(r23, 0.0);
    c7 = `as.logical`(r25);
    if c7 then L54() else L15(c7);
  L50():
    check_file_info1 = ld `check.file.info`;
    check L52() else D2();
  L51():
    r22 = dyn base3(<sym check.file.info>);
    goto L14(r22);
  L81():
    p9 = prom<V +>{
      sym8 = ldf inherits;
      base8 = ldf inherits in base;
      guard8 = `==`.4(sym8, base8);
      if guard8 then L1() else L2();
    L0(r46):
      return r46;
    L1():
      after1 = ld after;
      after2 = force? after1;
      checkMissing(after2);
      inherits1 = ldf inherits in base;
      r47 = dyn inherits1(after2, "fileSnapshot", FALSE);
      goto L0(r47);
    L2():
      r45 = dyn base8(<sym after>, "fileSnapshot");
      goto L0(r45);
    };
    r49 = dyn stopifnot1(p9);
    check L82() else D14();
  D2():
    deopt 9 [check_file_info1];
  D14():
    deopt 52 [r49];
  L15(c9):
    st `get.file.info` = c9;
    before27 = ld before;
    check L61() else D5();
  L52():
    check_file_info2 = force? check_file_info1;
    checkMissing(check_file_info2);
    length = ldf length in base;
    r24 = dyn length(check_file_info2);
    check L53() else D3();
  L54():
    before23 = ld before;
    check L55() else D4();
  L82():
    before31 = ld before;
    check L83() else D15();
  D3():
    deopt 12 [r24];
  D4():
    deopt 15 [c7, before23];
  D5():
    deopt 20 [before27];
  D15():
    deopt 53 [before31];
  L53():
    goto L14(r24);
  L55():
    before24 = force? before23;
    checkMissing(before24);
    c10 = `is.object`(before24);
    if c10 then L57() else L58(c7, before24);
  L61():
    before28 = force? before27;
    checkMissing(before28);
    c18 = `is.object`(before28);
    if c18 then L63() else L64(before28);
  L83():
    before32 = force? before31;
    checkMissing(before32);
    c21 = `is.object`(before32);
    if c21 then L85() else L86(before32);
  L56(c14, dx11):
    c15 = `as.logical`(dx11);
    c16 = `&&`(c14, c15);
    goto L15(c16);
  L57():
    dr10 = tryDispatchBuiltin.1("$", before24);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L59() else L58(c7, dr10);
  L58(c12, before26):
    r26 = `$`(before26, <sym file.info>);
    goto L56(c12, r26);
  L62(dx13):
    st args = dx13;
    sym4 = ldf list;
    base4 = ldf list in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L66() else L67();
  L63():
    dr12 = tryDispatchBuiltin.1("$", before28);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L65() else L64(dr12);
  L64(before30):
    r27 = `$`(before30, <sym args>);
    goto L62(r27);
  L84(dx17):
    st preinfo = dx17;
    after3 = ld after;
    check L88() else D16();
  L85():
    dr16 = tryDispatchBuiltin.1("$", before32);
    dc8 = getTryDispatchBuiltinDispatched(dr16);
    if dc8 then L87() else L86(dr16);
  L86(before34):
    r50 = `$`(before34, <sym info>);
    goto L84(r50);
  D16():
    deopt 57 [after3];
  L16(r29):
    st newargs = r29;
    newargs = ld newargs;
    check L70() else D8();
  L59():
    dx10 = getTryDispatchBuiltinValue(dr10);
    goto L56(c7, dx10);
  L65():
    dx12 = getTryDispatchBuiltinValue(dr12);
    goto L62(dx12);
  L66():
    list = ldf list;
    check L68() else D6();
  L67():
    r28 = dyn base4(<sym ...>);
    goto L16(r28);
  L87():
    dx16 = getTryDispatchBuiltinValue(dr16);
    goto L84(dx16);
  L88():
    after4 = force? after3;
    checkMissing(after4);
    c22 = `is.object`(after4);
    if c22 then L90() else L91(after4);
  D6():
    deopt 26 [];
  D8():
    deopt 30 [newargs];
  L68():
    ddd1 = ld `...`;
    r30 = dyn list[`...`](ddd1);
    check L69() else D7();
  L70():
    newargs1 = force? newargs;
    checkMissing(newargs1);
    l = ld args;
    c19 = `is.object`(l);
    if c19 then L71() else L72(newargs1, l);
  L89(dx19):
    st postinfo = dx19;
    rownames = ldf rownames;
    check L93() else D17();
  L90():
    dr18 = tryDispatchBuiltin.1("$", after4);
    dc9 = getTryDispatchBuiltinDispatched(dr18);
    if dc9 then L92() else L91(dr18);
  L91(after6):
    r51 = `$`(after6, <sym info>);
    goto L89(r51);
  D7():
    deopt 28 [r30];
  D17():
    deopt 62 [];
  L17(dx15):
    st args = dx15;
    do_call = ldf `do.call`;
    check L78() else D11();
  L69():
    goto L16(r30);
  L71():
    dr14 = tryDispatchBuiltin.0("[<-", l, newargs1);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L73() else L72(newargs1, dr14);
  L72(newargs3, l2):
    sym5 = ldf names;
    base5 = ldf names in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L74() else L75();
  L92():
    dx18 = getTryDispatchBuiltinValue(dr18);
    goto L89(dx18);
  L93():
    p10 = prom<V +>{
      preinfo = ld preinfo;
      preinfo1 = force? preinfo;
      checkMissing(preinfo1);
      return preinfo1;
    };
    r53 = dyn rownames(p10);
    check L94() else D18();
  D11():
    deopt 42 [];
  D18():
    deopt 64 [r53];
  L18(newargs10, l5, newargs11, r32):
    ___ = ldf `[<-` in base;
    r34 = dyn ___(l5, newargs11, r32);
    goto L17(r34);
  L73():
    dx14 = getTryDispatchBuiltinValue(dr14);
    goto L17(dx14);
  L74():
    newargs12 = ld newargs;
    check L76() else D9();
  L75():
    r31 = dyn base5(<sym newargs>);
    goto L18(newargs3, l2, newargs1, r31);
  L78():
    p7 = prom<V +>{
      fileSnapshot = ld fileSnapshot;
      fileSnapshot1 = force? fileSnapshot;
      checkMissing(fileSnapshot1);
      return fileSnapshot1;
    };
    p8 = prom<V +>{
      sym6 = ldf c;
      base6 = ldf c in base;
      guard6 = `==`.4(sym6, base6);
      if guard6 then L2() else L3();
    L0(r37):
      return r37;
    L2():
      sym7 = ldf list;
      base7 = ldf list in base;
      guard7 = `==`.4(sym7, base7);
      if guard7 then L4() else L5();
    L3():
      r36 = dyn base6(<lang list(path=path, timestamp=NULL, file.info=get.file.info, md5sum=md5sum, digest=digest, full.names=full.names)>, <sym args>);
      goto L0(r36);
    L1(r39):
      args = ld args;
      args1 = force? args;
      checkMissing(args1);
      c20 = ldf c in base;
      r41 = dyn c20(r39, args1);
      goto L0(r41);
    L4():
      path1 = ld path;
      path2 = force? path1;
      checkMissing(path2);
      get_file_info = ld `get.file.info`;
      get_file_info1 = force? get_file_info;
      checkMissing(get_file_info1);
      md5sum1 = ld md5sum;
      md5sum2 = force? md5sum1;
      checkMissing(md5sum2);
      digest1 = ld digest;
      digest2 = force? digest1;
      checkMissing(digest2);
      full_names1 = ld `full.names`;
      full_names2 = force? full_names1;
      checkMissing(full_names2);
      list1 = ldf list in base;
      r40 = dyn list1(path2, NULL, get_file_info1, md5sum2, digest2, full_names2);
      goto L1(r40);
    L5():
      r38 = dyn base7[path, timestamp, `file.info`, md5sum, digest, `full.names`](<sym path>, NULL, <sym get.file.info>, <sym md5sum>, <sym digest>, <sym full.names>);
      goto L1(r38);
    };
    r43 = dyn do_call(p7, p8);
    check L79() else D12();
  L94():
    st prenames = r53;
    rownames1 = ldf rownames;
    check L95() else D19();
  D9():
    deopt 35 [newargs3, l2, newargs1, newargs12];
  D12():
    deopt 45 [r43];
  D19():
    deopt 67 [];
  L76():
    newargs13 = force? newargs12;
    checkMissing(newargs13);
    names = ldf names in base;
    r33 = dyn names(newargs13);
    check L77() else D10();
  L79():
    st after = r43;
    goto L19();
  L95():
    p11 = prom<V +>{
      postinfo = ld postinfo;
      postinfo1 = force? postinfo;
      checkMissing(postinfo1);
      return postinfo1;
    };
    r55 = dyn rownames1(p11);
    check L96() else D20();
  D10():
    deopt 38 [newargs3, l2, newargs1, r33];
  D20():
    deopt 69 [r55];
  L77():
    goto L18(newargs3, l2, newargs1, r33);
  L96():
    st postnames = r55;
    setdiff = ldf setdiff;
    check L97() else D21();
  D21():
    deopt 72 [];
  L97():
    p12 = prom<V +>{
      postnames = ld postnames;
      postnames1 = force? postnames;
      checkMissing(postnames1);
      return postnames1;
    };
    p13 = prom<V +>{
      prenames = ld prenames;
      prenames1 = force? prenames;
      checkMissing(prenames1);
      return prenames1;
    };
    r58 = dyn setdiff(p12, p13);
    check L98() else D22();
  D22():
    deopt 75 [r58];
  L98():
    st added = r58;
    setdiff1 = ldf setdiff;
    check L99() else D23();
  D23():
    deopt 78 [];
  L99():
    p14 = prom<V +>{
      prenames2 = ld prenames;
      prenames3 = force? prenames2;
      checkMissing(prenames3);
      return prenames3;
    };
    p15 = prom<V +>{
      postnames2 = ld postnames;
      postnames3 = force? postnames2;
      checkMissing(postnames3);
      return postnames3;
    };
    r61 = dyn setdiff1(p14, p15);
    check L100() else D24();
  D24():
    deopt 81 [r61];
  L100():
    st deleted = r61;
    intersect = ldf intersect;
    check L101() else D25();
  D25():
    deopt 84 [];
  L101():
    p16 = prom<V +>{
      prenames4 = ld prenames;
      prenames5 = force? prenames4;
      checkMissing(prenames5);
      return prenames5;
    };
    p17 = prom<V +>{
      postnames4 = ld postnames;
      postnames5 = force? postnames4;
      checkMissing(postnames5);
      return postnames5;
    };
    r64 = dyn intersect(p16, p17);
    check L102() else D26();
  D26():
    deopt 87 [r64];
  L102():
    st common = r64;
    before35 = ld before;
    check L103() else D27();
  D27():
    deopt 89 [before35];
  L103():
    before36 = force? before35;
    checkMissing(before36);
    c23 = `is.object`(before36);
    if c23 then L105() else L106(before36);
  L104(dx21):
    r66 = `!`(dx21);
    c24 = `as.logical`(r66);
    if c24 then L20(c24) else L108();
  L105():
    dr20 = tryDispatchBuiltin.1("$", before36);
    dc10 = getTryDispatchBuiltinDispatched(dr20);
    if dc10 then L107() else L106(dr20);
  L106(before38):
    r65 = `$`(before38, <sym file.info>);
    goto L104(r65);
  L20(c25):
    c35 = `as.logical`(c25);
    if c35 then L115() else L21();
  L107():
    dx20 = getTryDispatchBuiltinValue(dr20);
    goto L104(dx20);
  L108():
    after7 = ld after;
    check L109() else D28();
  D28():
    deopt 93 [c24, after7];
  L21():
    goto L22();
  L22():
    sym9 = ldf length;
    base9 = ldf length in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L117() else L118();
  L109():
    after8 = force? after7;
    checkMissing(after8);
    c27 = `is.object`(after8);
    if c27 then L111() else L112(c24, after8);
  L115():
    st `check.file.info` = NULL;
    goto L22();
  L23(r71):
    c36 = `as.logical`(r71);
    if c36 then L121() else L24();
  L110(c31, dx23):
    r68 = `!`(dx23);
    c32 = `as.logical`(r68);
    c33 = `||`(c31, c32);
    goto L20(c33);
  L111():
    dr22 = tryDispatchBuiltin.1("$", after8);
    dc11 = getTryDispatchBuiltinDispatched(dr22);
    if dc11 then L113() else L112(c24, dr22);
  L112(c29, after10):
    r67 = `$`(after10, <sym file.info>);
    goto L110(c29, r67);
  L117():
    check_file_info3 = ld `check.file.info`;
    check L119() else D29();
  L118():
    r70 = dyn base9(<sym check.file.info>);
    goto L23(r70);
  D29():
    deopt 105 [check_file_info3];
  L24():
    matrix = ldf matrix;
    check L137() else D39();
  L27():
    sym12 = ldf length;
    base12 = ldf length in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L139() else L140();
  L113():
    dx22 = getTryDispatchBuiltinValue(dr22);
    goto L110(c24, dx22);
  L119():
    check_file_info4 = force? check_file_info3;
    checkMissing(check_file_info4);
    length1 = ldf length in base;
    r72 = dyn length1(check_file_info4);
    check L120() else D30();
  L121():
    preinfo2 = ld preinfo;
    check L122() else D31();
  D30():
    deopt 108 [r72];
  D31():
    deopt 109 [preinfo2];
  D39():
    deopt 137 [];
  L28(r90):
    c39 = `as.logical`(r90);
    if c39 then L143() else L29();
  L120():
    goto L23(r72);
  L122():
    preinfo3 = force? preinfo2;
    checkMissing(preinfo3);
    c37 = `is.object`(preinfo3);
    if c37 then L123() else L124(preinfo3);
  L137():
    p18 = prom<V +>{
      logical = ldf logical;
      r77 = dyn logical(0.0);
      return r77;
    };
    p19 = prom<V +>{
      sym10 = ldf length;
      base10 = ldf length in base;
      guard10 = `==`.4(sym10, base10);
      if guard10 then L1() else L2();
    L0(r80):
      return r80;
    L1():
      common4 = ld common;
      common5 = force? common4;
      checkMissing(common5);
      length2 = ldf length in base;
      r81 = dyn length2(common5);
      goto L0(r81);
    L2():
      r79 = dyn base10(<sym common>);
      goto L0(r79);
    };
    p20 = prom<V +>{
      sym11 = ldf list;
      base11 = ldf list in base;
      guard11 = `==`.4(sym11, base11);
      if guard11 then L1() else L2();
    L0(r84):
      return r84;
    L1():
      common6 = ld common;
      common7 = force? common6;
      checkMissing(common7);
      character = ldf character;
      r85 = dyn character(0.0);
      list2 = ldf list in base;
      r86 = dyn list2(common7, r85);
      goto L0(r86);
    L2():
      r83 = dyn base11(<sym common>, <lang character(0.0)>);
      goto L0(r83);
    };
    r88 = dyn matrix[, nrow, ncol, dimnames](p18, p19, 0.0, p20);
    check L138() else D40();
  L139():
    timestamp1 = ld timestamp;
    check L141() else D41();
  L140():
    r89 = dyn base12(<sym timestamp>);
    goto L28(r89);
  D40():
    deopt 145 [r88];
  D41():
    deopt 149 [timestamp1];
  L25(dx25):
    st pre = dx25;
    postinfo2 = ld postinfo;
    check L128() else D34();
  L29():
    goto L34();
  L34():
    md5sum3 = ld md5sum;
    check L163() else D53();
  L123():
    dr24 = tryDispatchBuiltin.1("[", preinfo3);
    dc12 = getTryDispatchBuiltinDispatched(dr24);
    if dc12 then L125() else L124(dr24);
  L124(preinfo5):
    common = ld common;
    check L126() else D32();
  L138():
    st changes = r88;
    goto L27();
  L141():
    timestamp2 = force? timestamp1;
    checkMissing(timestamp2);
    length3 = ldf length in base;
    r91 = dyn length3(timestamp2);
    check L142() else D42();
  L143():
    file_exists = ldf `file.exists`;
    check L144() else D43();
  D32():
    deopt 111 [preinfo5, common];
  D34():
    deopt 120 [postinfo2];
  D42():
    deopt 152 [r91];
  D43():
    deopt 154 [];
  D53():
    deopt 181 [md5sum3];
  L125():
    dx24 = getTryDispatchBuiltinValue(dr24);
    goto L25(dx24);
  L126():
    common1 = force? common;
    check_file_info5 = ld `check.file.info`;
    check L127() else D33();
  L128():
    postinfo3 = force? postinfo2;
    checkMissing(postinfo3);
    c38 = `is.object`(postinfo3);
    if c38 then L129() else L130(postinfo3);
  L142():
    goto L28(r91);
  L144():
    p21 = prom<V +>{
      timestamp3 = ld timestamp;
      timestamp4 = force? timestamp3;
      checkMissing(timestamp4);
      return timestamp4;
    };
    r93 = dyn file_exists(p21);
    check L145() else D44();
  L163():
    md5sum4 = force? md5sum3;
    checkMissing(md5sum4);
    c44 = `as.logical`(md5sum4);
    if c44 then L164() else L35();
  D33():
    deopt 113 [preinfo5, check_file_info5];
  D44():
    deopt 156 [r93];
  L26(dx27):
    st post = dx27;
    pre = ld pre;
    check L134() else D37();
  L35():
    goto L38();
  L38():
    sym13 = ldf `is.null`;
    base13 = ldf `is.null` in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L178() else L179();
  L127():
    check_file_info6 = force? check_file_info5;
    __ = ldf `[` in base;
    r73 = dyn __(preinfo3, common1, check_file_info6, FALSE);
    goto L25(r73);
  L129():
    dr26 = tryDispatchBuiltin.1("[", postinfo3);
    dc13 = getTryDispatchBuiltinDispatched(dr26);
    if dc13 then L131() else L130(dr26);
  L130(postinfo5):
    common2 = ld common;
    check L132() else D35();
  L145():
    c40 = `as.logical`(r93);
    if c40 then L146() else L30();
  L164():
    preinfo6 = ld preinfo;
    check L165() else D54();
  D35():
    deopt 122 [postinfo5, common2];
  D37():
    deopt 131 [pre];
  D54():
    deopt 183 [preinfo6];
  L30():
    warning = ldf warning;
    check L160() else D51();
  L33(r105):
    goto L34();
  L39(r116):
    r117 = `!`(r116);
    c48 = `as.logical`(r117);
    if c48 then L181() else L40();
  L131():
    dx26 = getTryDispatchBuiltinValue(dr26);
    goto L26(dx26);
  L132():
    common3 = force? common2;
    check_file_info7 = ld `check.file.info`;
    check L133() else D36();
  L134():
    pre1 = force? pre;
    checkMissing(pre1);
    post = ld post;
    check L135() else D38();
  L146():
    after11 = ld after;
    check L147() else D45();
  L165():
    preinfo7 = force? preinfo6;
    checkMissing(preinfo7);
    c45 = `is.object`(preinfo7);
    if c45 then L166() else L167(preinfo7);
  L178():
    digest3 = ld digest;
    check L180() else D60();
  L179():
    r115 = dyn base13(<sym digest>);
    goto L39(r115);
  D36():
    deopt 124 [postinfo5, check_file_info7];
  D38():
    deopt 132 [pre1, post];
  D45():
    deopt 157 [after11];
  D51():
    deopt 176 [];
  D60():
    deopt 207 [digest3];
  L36(dx33):
    st pre = dx33;
    postinfo6 = ld postinfo;
    check L170() else D56();
  L40():
    goto L43();
  L43():
    rownames2 = ldf rownames;
    check L195() else D67();
  L133():
    check_file_info8 = force? check_file_info7;
    __1 = ldf `[` in base;
    r74 = dyn __1(postinfo3, common3, check_file_info8, FALSE);
    goto L26(r74);
  L135():
    post1 = force? post;
    checkMissing(post1);
    r75 = `!=`(pre1, post1);
    st changes = r75;
    goto L27();
  L147():
    after12 = force? after11;
    checkMissing(after12);
    c41 = `is.object`(after12);
    if c41 then L149() else L150(after12);
  L160():
    r106 = dyn warning("Timestamp file no longer exists.");
    check L161() else D52();
  L166():
    dr32 = tryDispatchBuiltin.1("[", preinfo7);
    dc16 = getTryDispatchBuiltinDispatched(dr32);
    if dc16 then L168() else L167(dr32);
  L167(preinfo9):
    common13 = ld common;
    check L169() else D55();
  L180():
    digest4 = force? digest3;
    checkMissing(digest4);
    c47 = `==`(digest4, NULL);
    goto L39(c47);
  L181():
    preinfo10 = ld preinfo;
    check L182() else D61();
  D52():
    deopt 178 [r106];
  D55():
    deopt 185 [preinfo9, common13];
  D56():
    deopt 190 [postinfo6];
  D61():
    deopt 211 [preinfo10];
  D67():
    deopt 235 [];
  L148(dx29):
    c42 = `as.logical`(dx29);
    if c42 then L152() else L31();
  L149():
    dr28 = tryDispatchBuiltin.1("$", after12);
    dc14 = getTryDispatchBuiltinDispatched(dr28);
    if dc14 then L151() else L150(dr28);
  L150(after14):
    r94 = `$`(after14, <sym full.names>);
    goto L148(r94);
  L161():
    goto L33(r106);
  L168():
    dx32 = getTryDispatchBuiltinValue(dr32);
    goto L36(dx32);
  L169():
    common14 = force? common13;
    __2 = ldf `[` in base;
    r108 = dyn __2(preinfo9, common14, "md5sum");
    goto L36(r108);
  L170():
    postinfo7 = force? postinfo6;
    checkMissing(postinfo7);
    c46 = `is.object`(postinfo7);
    if c46 then L171() else L172(postinfo7);
  L182():
    preinfo11 = force? preinfo10;
    checkMissing(preinfo11);
    c49 = `is.object`(preinfo11);
    if c49 then L183() else L184(preinfo11);
  L195():
    p32 = prom<V +>{
      changes6 = ld changes;
      changes7 = force? changes6;
      checkMissing(changes7);
      return changes7;
    };
    r126 = dyn rownames2(p32);
    check L196() else D68();
  D68():
    deopt 237 [r126];
  L31():
    file_path = ldf `file.path`;
    check L155() else D47();
  L32(common10):
    st fullnames = common10;
    cbind = ldf cbind;
    check L157() else D49();
  L37(dx35):
    st post = dx35;
    cbind1 = ldf cbind;
    check L175() else D58();
  L41(dx37):
    st pre = dx37;
    postinfo10 = ld postinfo;
    check L187() else D63();
  L151():
    dx28 = getTryDispatchBuiltinValue(dr28);
    goto L148(dx28);
  L152():
    common8 = ld common;
    check L153() else D46();
  L171():
    dr34 = tryDispatchBuiltin.1("[", postinfo7);
    dc17 = getTryDispatchBuiltinDispatched(dr34);
    if dc17 then L173() else L172(dr34);
  L172(postinfo9):
    common15 = ld common;
    check L174() else D57();
  L183():
    dr36 = tryDispatchBuiltin.1("[", preinfo11);
    dc18 = getTryDispatchBuiltinDispatched(dr36);
    if dc18 then L185() else L184(dr36);
  L184(preinfo13):
    common17 = ld common;
    check L186() else D62();
  L196():
    c51 = `is.object`(r126);
    if c51 then L197() else L198(r126);
  D46():
    deopt 160 [common8];
  D47():
    deopt 163 [];
  D49():
    deopt 169 [];
  D57():
    deopt 192 [postinfo9, common15];
  D58():
    deopt 198 [];
  D62():
    deopt 213 [preinfo13, common17];
  D63():
    deopt 218 [postinfo10];
  L44(dx41):
    st changed = dx41;
    structure = ldf structure;
    check L202() else D71();
  L153():
    common9 = force? common8;
    checkMissing(common9);
    goto L32(common9);
  L155():
    p22 = prom<V +>{
      after15 = ld after;
      after16 = force? after15;
      checkMissing(after16);
      c43 = `is.object`(after16);
      if c43 then L1() else L2(after16);
    L0(dx31):
      return dx31;
    L1():
      dr30 = tryDispatchBuiltin.1("$", after16);
      dc15 = getTryDispatchBuiltinDispatched(dr30);
      if dc15 then L3() else L2(dr30);
    L2(after18):
      r95 = `$`(after18, <sym path>);
      goto L0(r95);
    L3():
      dx30 = getTryDispatchBuiltinValue(dr30);
      goto L0(dx30);
    };
    p23 = prom<V +>{
      common11 = ld common;
      common12 = force? common11;
      checkMissing(common12);
      return common12;
    };
    r98 = dyn file_path(p22, p23);
    check L156() else D48();
  L157():
    p24 = prom<V +>{
      changes = ld changes;
      changes1 = force? changes;
      checkMissing(changes1);
      return changes1;
    };
    p27 = prom<V +>{
      file_test = ldf file_test;
      p25 = prom<V +>{
        fullnames = ld fullnames;
        fullnames1 = force? fullnames;
        checkMissing(fullnames1);
        return fullnames1;
      };
      p26 = prom<V +>{
        timestamp5 = ld timestamp;
        timestamp6 = force? timestamp5;
        checkMissing(timestamp6);
        return timestamp6;
      };
      r102 = dyn file_test("-nt", p25, p26);
      return r102;
    };
    r104 = dyn cbind[, Newer](p24, p27);
    check L158() else D50();
  L173():
    dx34 = getTryDispatchBuiltinValue(dr34);
    goto L37(dx34);
  L174():
    common16 = force? common15;
    __3 = ldf `[` in base;
    r109 = dyn __3(postinfo9, common16, "md5sum");
    goto L37(r109);
  L175():
    p28 = prom<V +>{
      changes2 = ld changes;
      changes3 = force? changes2;
      checkMissing(changes3);
      return changes3;
    };
    p29 = prom<V +>{
      pre2 = ld pre;
      pre3 = force? pre2;
      checkMissing(pre3);
      post2 = ld post;
      post3 = force? post2;
      checkMissing(post3);
      r111 = `!=`(pre3, post3);
      return r111;
    };
    r113 = dyn cbind1[, md5sum](p28, p29);
    check L176() else D59();
  L185():
    dx36 = getTryDispatchBuiltinValue(dr36);
    goto L41(dx36);
  L186():
    common18 = force? common17;
    __4 = ldf `[` in base;
    r118 = dyn __4(preinfo13, common18, "digest");
    goto L41(r118);
  L187():
    postinfo11 = force? postinfo10;
    checkMissing(postinfo11);
    c50 = `is.object`(postinfo11);
    if c50 then L188() else L189(postinfo11);
  L197():
    dr40 = tryDispatchBuiltin.1("[", r126);
    dc20 = getTryDispatchBuiltinDispatched(dr40);
    if dc20 then L199() else L198(dr40);
  L198(r128):
    rowSums = ldf rowSums;
    check L200() else D69();
  D48():
    deopt 166 [r98];
  D50():
    deopt 173 [r104];
  D59():
    deopt 202 [r113];
  D69():
    deopt 239 [r128];
  D71():
    deopt 249 [];
  L42(dx39):
    st post = dx39;
    cbind2 = ldf cbind;
    check L192() else D65();
  L156():
    goto L32(r98);
  L158():
    st changes = r104;
    goto L33(r104);
  L176():
    st changes = r113;
    goto L38();
  L188():
    dr38 = tryDispatchBuiltin.1("[", postinfo11);
    dc19 = getTryDispatchBuiltinDispatched(dr38);
    if dc19 then L190() else L189(dr38);
  L189(postinfo13):
    common19 = ld common;
    check L191() else D64();
  L199():
    dx40 = getTryDispatchBuiltinValue(dr40);
    goto L44(dx40);
  L200():
    p33 = prom<V +>{
      changes8 = ld changes;
      changes9 = force? changes8;
      checkMissing(changes9);
      return changes9;
    };
    r130 = dyn rowSums[, `na.rm`](p33, TRUE);
    check L201() else D70();
  L202():
    p36 = prom<V +>{
      sym14 = ldf list;
      base14 = ldf list in base;
      guard14 = `==`.4(sym14, base14);
      if guard14 then L1() else L2();
    L0(r134):
      return r134;
    L1():
      added = ld added;
      added1 = force? added;
      checkMissing(added1);
      deleted = ld deleted;
      deleted1 = force? deleted;
      checkMissing(deleted1);
      changed = ld changed;
      changed1 = force? changed;
      checkMissing(changed1);
      setdiff2 = ldf setdiff;
      p34 = prom<V +>{
        common21 = ld common;
        common22 = force? common21;
        checkMissing(common22);
        return common22;
      };
      p35 = prom<V +>{
        changed2 = ld changed;
        changed3 = force? changed2;
        checkMissing(changed3);
        return changed3;
      };
      r137 = dyn setdiff2(p34, p35);
      changes10 = ld changes;
      changes11 = force? changes10;
      checkMissing(changes11);
      list3 = ldf list in base;
      r138 = dyn list3(added1, deleted1, changed1, r137, changes11);
      goto L0(r138);
    L2():
      r133 = dyn base14[added, deleted, changed, unchanged, changes](<sym added>, <sym deleted>, <sym changed>, <lang setdiff(common, changed)>, <sym changes>);
      goto L0(r133);
    };
    r140 = dyn structure[, class](p36, "changedFiles");
    check L203() else D72();
  D64():
    deopt 220 [postinfo13, common19];
  D65():
    deopt 226 [];
  D70():
    deopt 243 [r128, r130];
  D72():
    deopt 253 [r140];
  L190():
    dx38 = getTryDispatchBuiltinValue(dr38);
    goto L42(dx38);
  L191():
    common20 = force? common19;
    __5 = ldf `[` in base;
    r119 = dyn __5(postinfo13, common20, "digest");
    goto L42(r119);
  L192():
    p30 = prom<V +>{
      changes4 = ld changes;
      changes5 = force? changes4;
      checkMissing(changes5);
      return changes5;
    };
    p31 = prom<V +>{
      pre4 = ld pre;
      pre5 = force? pre4;
      checkMissing(pre5);
      post4 = ld post;
      post5 = force? post4;
      checkMissing(post5);
      r121 = `!=`(pre5, post5);
      return r121;
    };
    r123 = dyn cbind2[, digest](p30, p31);
    check L193() else D66();
  L201():
    r131 = `>`(r130, 0.0);
    __6 = ldf `[` in base;
    r132 = dyn __6(r128, r131);
    goto L44(r132);
  L203():
    popenv;
    return r140;
  D66():
    deopt 230 [r123];
  L193():
    st changes = r123;
    goto L43();
  }
}