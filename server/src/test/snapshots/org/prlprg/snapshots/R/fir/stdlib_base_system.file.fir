fun main() {
  () -+> V { reg r:cls, reg system_file:cls, reg r1:V, reg system_file1:cls, reg r2:V, reg system_file2:cls, reg r3:V, reg system_file3:cls, reg r4:V |
    mkenv;
    r = clos inner3188812281;
    st `system.file` = r;
    system_file = ldf `system.file`;
    check L0() else D0();
  D0():
    deopt 4 [];
  L0():
    r1 = dyn system_file();
    check L1() else D1();
  D1():
    deopt 5 [r1];
  L1():
    system_file1 = ldf `system.file`;
    check L2() else D2();
  D2():
    deopt 7 [];
  L2():
    r2 = dyn system_file1[package]("stats");
    check L3() else D3();
  D3():
    deopt 10 [r2];
  L3():
    system_file2 = ldf `system.file`;
    check L4() else D4();
  D4():
    deopt 12 [];
  L4():
    r3 = dyn system_file2("INDEX");
    check L5() else D5();
  D5():
    deopt 14 [r3];
  L5():
    system_file3 = ldf `system.file`;
    check L6() else D6();
  D6():
    deopt 16 [];
  L6():
    r4 = dyn system_file3[, , package]("help", "AnIndex", "splines");
    check L7() else D7();
  D7():
    deopt 21 [r4];
  L7():
    popenv;
    return r4;
  }
}
fun inner3188812281(`...`, package, `lib.loc`, mustWork) {
  (reg ddd:dots, reg package:*, reg lib_loc:*, reg mustWork:*) -+> V { var `...`:dots?, var package:*, reg package_isMissing:L, reg package_orDefault:*, var `lib.loc`:*, reg lib_loc_isMissing:L, reg lib_loc_orDefault:*, var mustWork:*, reg mustWork_isMissing:L, reg mustWork_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg nargs:cls, reg r2:V, reg r3:V, reg c:L, reg file_path:cls, reg _Library:*, reg _Library1:V, reg p:p(V +), reg r5:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r8:V, reg r9:V, reg package1:*, reg package2:V, reg length:cls, reg r10:V, reg r11:V, reg c1:L, reg stop:cls, reg r12:V, reg find_package:cls, reg package3:*, reg package4:V, reg p1:p(V +), reg lib_loc1:*, reg lib_loc2:V, reg p2:p(V +), reg r16:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r17:V, reg r18:V, reg packagePath:*, reg packagePath1:V, reg length1:cls, reg r19:V, reg c2:L, reg file_path1:cls, reg packagePath2:*, reg packagePath3:V, reg p3:p(V +), reg ddd1:dots?, reg r21:V, reg file_exists:cls, reg FILES:*, reg FILES1:V, reg p4:p(V +), reg r23:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r24:V, reg r25:V, reg present:*, reg present1:V, reg any:cls, reg r26:V, reg c3:L, reg FILES2:*, reg FILES3:V, reg c4:L, reg FILES5:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg present2:*, reg present3:V, reg __:cls, reg r27:V, reg dx2:V, reg dx3:V, reg mustWork1:*, reg mustWork2:V, reg c5:L, reg c7:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r28:V, reg c10:L, reg r29:V, reg ans:*, reg ans1:V, reg identical:cls, reg r30:V, reg c11:L, reg c12:V, reg c14:L, reg stop1:cls, reg r31:V, reg ans2:*, reg ans3:V |
    mkenv;
    st `...` = ddd;
    package_isMissing = missing.0(package);
    if package_isMissing then L0("base") else L0(package);
  L0(package_orDefault):
    st package = package_orDefault;
    lib_loc_isMissing = missing.0(lib_loc);
    if lib_loc_isMissing then L1(NULL) else L1(lib_loc);
  L1(lib_loc_orDefault):
    st `lib.loc` = lib_loc_orDefault;
    mustWork_isMissing = missing.0(mustWork);
    if mustWork_isMissing then L2(FALSE) else L2(mustWork);
  L2(mustWork_orDefault):
    st mustWork = mustWork_orDefault;
    sym = ldf nargs;
    base = ldf nargs in base;
    guard = `==`.4(sym, base);
    if guard then L20() else L21();
  L3(r1):
    r3 = `==`(r1, 0);
    c = `as.logical`(r3);
    if c then L23() else L4();
  L20():
    nargs = ldf nargs in base;
    r2 = dyn nargs();
    check L22() else D0();
  L21():
    r = dyn base();
    goto L3(r);
  D0():
    deopt 3 [r2];
  L4():
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L28() else L29();
  L22():
    goto L3(r2);
  L23():
    file_path = ldf `file.path`;
    check L24() else D1();
  D1():
    deopt 7 [];
  L6(r9):
    r11 = `!=`(r9, 1);
    c1 = `as.logical`(r11);
    if c1 then L32() else L7();
  L24():
    p = prom<V +>{
      _Library = ld `.Library`;
      _Library1 = force? _Library;
      checkMissing(_Library1);
      return _Library1;
    };
    r5 = dyn file_path(p, "base");
    check L25() else D2();
  L28():
    package1 = ld package;
    check L30() else D3();
  L29():
    r8 = dyn base1(<sym package>);
    goto L6(r8);
  D2():
    deopt 10 [r5];
  D3():
    deopt 16 [package1];
  L7():
    goto L8();
  L8():
    find_package = ldf `find.package`;
    check L36() else D7();
  L25():
    popenv;
    return r5;
  L30():
    package2 = force? package1;
    checkMissing(package2);
    length = ldf length in base;
    r10 = dyn length(package2);
    check L31() else D4();
  L32():
    stop = ldf stop;
    check L33() else D5();
  D4():
    deopt 19 [r10];
  D5():
    deopt 23 [];
  D7():
    deopt 29 [];
  L31():
    goto L6(r10);
  L33():
    r12 = dyn stop("'package' must be of length 1");
    check L34() else D6();
  L36():
    p1 = prom<V +>{
      package3 = ld package;
      package4 = force? package3;
      checkMissing(package4);
      return package4;
    };
    p2 = prom<V +>{
      lib_loc1 = ld `lib.loc`;
      lib_loc2 = force? lib_loc1;
      checkMissing(lib_loc2);
      return lib_loc2;
    };
    r16 = dyn find_package[, , quiet](p1, p2, TRUE);
    check L37() else D8();
  D6():
    deopt 25 [r12];
  D8():
    deopt 34 [r16];
  L34():
    goto L8();
  L37():
    st packagePath = r16;
    sym2 = ldf length;
    base2 = ldf length in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L38() else L39();
  L9(r18):
    c2 = `as.logical`(r18);
    if c2 then L42() else L10();
  L38():
    packagePath = ld packagePath;
    check L40() else D9();
  L39():
    r17 = dyn base2(<sym packagePath>);
    goto L9(r17);
  D9():
    deopt 38 [packagePath];
  L10():
    goto L15("");
  L15(dx3):
    st ans = dx3;
    mustWork1 = ld mustWork;
    check L59() else D19();
  L40():
    packagePath1 = force? packagePath;
    checkMissing(packagePath1);
    length1 = ldf length in base;
    r19 = dyn length1(packagePath1);
    check L41() else D10();
  L42():
    file_path1 = ldf `file.path`;
    check L43() else D11();
  D10():
    deopt 41 [r19];
  D11():
    deopt 43 [];
  D19():
    deopt 69 [mustWork1];
  L41():
    goto L9(r19);
  L43():
    p3 = prom<V +>{
      packagePath2 = ld packagePath;
      packagePath3 = force? packagePath2;
      checkMissing(packagePath3);
      return packagePath3;
    };
    ddd1 = ld `...`;
    r21 = dyn file_path1[, `...`](p3, ddd1);
    check L44() else D12();
  L59():
    mustWork2 = force? mustWork1;
    checkMissing(mustWork2);
    c5 = `as.logical`(mustWork2);
    if c5 then L60() else L16(c5);
  D12():
    deopt 46 [r21];
  L16(c7):
    c14 = `as.logical`(c7);
    if c14 then L66() else L18();
  L44():
    st FILES = r21;
    file_exists = ldf `file.exists`;
    check L45() else D13();
  L60():
    sym4 = ldf identical;
    base4 = ldf identical in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L61() else L62();
  D13():
    deopt 49 [];
  L17(c10, r29):
    c11 = `as.logical`(r29);
    c12 = `&&`(c10, c11);
    goto L16(c12);
  L18():
    goto L19();
  L19():
    ans2 = ld ans;
    check L70() else D24();
  L45():
    p4 = prom<V +>{
      FILES = ld FILES;
      FILES1 = force? FILES;
      checkMissing(FILES1);
      return FILES1;
    };
    r23 = dyn file_exists(p4);
    check L46() else D14();
  L61():
    ans = ld ans;
    check L63() else D20();
  L62():
    r28 = dyn base4(<sym ans>, "");
    goto L17(c5, r28);
  L66():
    stop1 = ldf stop;
    check L67() else D22();
  D14():
    deopt 51 [r23];
  D20():
    deopt 73 [c5, ans];
  D22():
    deopt 87 [];
  D24():
    deopt 92 [ans2];
  L46():
    st present = r23;
    sym3 = ldf any;
    base3 = ldf any in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L47() else L48();
  L63():
    ans1 = force? ans;
    checkMissing(ans1);
    identical = ldf identical in base;
    r30 = dyn identical(ans1, "", TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
    check L64() else D21();
  L67():
    r31 = dyn stop1("no file found");
    check L68() else D23();
  L70():
    ans3 = force? ans2;
    checkMissing(ans3);
    popenv;
    return ans3;
  D21():
    deopt 84 [c5, r30];
  D23():
    deopt 89 [r31];
  L11(r25):
    c3 = `as.logical`(r25);
    if c3 then L51() else L12();
  L47():
    present = ld present;
    check L49() else D15();
  L48():
    r24 = dyn base3(<sym present>);
    goto L11(r24);
  L64():
    goto L17(c5, r30);
  L68():
    goto L19();
  D15():
    deopt 55 [present];
  L12():
    goto L14("");
  L14(dx2):
    goto L15(dx2);
  L49():
    present1 = force? present;
    checkMissing(present1);
    any = ldf any in base;
    r26 = dyn any(present1);
    check L50() else D16();
  L51():
    FILES2 = ld FILES;
    check L52() else D17();
  D16():
    deopt 58 [r26];
  D17():
    deopt 59 [FILES2];
  L50():
    goto L11(r26);
  L52():
    FILES3 = force? FILES2;
    checkMissing(FILES3);
    c4 = `is.object`(FILES3);
    if c4 then L53() else L54(FILES3);
  L13(dx1):
    goto L14(dx1);
  L53():
    dr = tryDispatchBuiltin.1("[", FILES3);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L55() else L54(dr);
  L54(FILES5):
    present2 = ld present;
    check L56() else D18();
  D18():
    deopt 61 [FILES5, present2];
  L55():
    dx = getTryDispatchBuiltinValue(dr);
    goto L13(dx);
  L56():
    present3 = force? present2;
    __ = ldf `[` in base;
    r27 = dyn __(FILES5, present3);
    goto L13(r27);
  }
}