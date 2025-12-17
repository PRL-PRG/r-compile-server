fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2843021224;
    st inRbuildignore = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2843021224(files, pkgdir) {
  (reg files:*, reg pkgdir:*) -+> V { var files:*, var pkgdir:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r2:V, reg r3:V, reg files1:*, reg files2:V, reg length:cls, reg r4:V, reg rep_int:cls, reg r5:V, reg get_exclude_patterns:cls, reg r6:V, reg file_path:cls, reg pkgdir1:*, reg pkgdir2:V, reg p:p(V +), reg r8:V, reg file_exists:cls, reg ignore_file:*, reg ignore_file1:V, reg p1:p(V +), reg r10:V, reg c:L, reg sym2:cls, reg base2:cls, reg guard2:L, reg r11:V, reg r12:V, reg ignore:*, reg ignore1:V, reg readLines:cls, reg ignore_file2:*, reg ignore_file3:V, reg p2:p(V +), reg r14:V, reg c1:cls, reg r15:V, reg ignore2:*, reg ignore3:V, reg c2:L, reg ignore5:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r17:V, reg ignore8:V, reg r18:V, reg ignore9:*, reg ignore10:V, reg nzchar:cls, reg r19:V, reg __:cls, reg r20:V, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c3:L, reg x:V, reg exclude:*, reg exclude1:V, reg grepl:cls, reg e:*, reg e1:V, reg p3:p(V +), reg files3:*, reg files4:V, reg p4:p(V +), reg r23:V, reg r24:V, reg exclude2:*, reg exclude3:V |
    mkenv;
    st files = files;
    st pkgdir = pkgdir;
    sym = ldf `rep.int`;
    base = ldf `rep.int` in base;
    guard = `==`.4(sym, base);
    if guard then L9() else L10();
  L0(r1):
    st exclude = r1;
    get_exclude_patterns = ldf get_exclude_patterns;
    check L16() else D3();
  L9():
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L11() else L12();
  L10():
    r = dyn base(FALSE, <lang length(files)>);
    goto L0(r);
  D3():
    deopt 13 [];
  L1(r3):
    rep_int = ldf `rep.int` in base;
    r5 = dyn rep_int(FALSE, r3);
    check L15() else D2();
  L11():
    files1 = ld files;
    check L13() else D0();
  L12():
    r2 = dyn base1(<sym files>);
    goto L1(r2);
  L16():
    r6 = dyn get_exclude_patterns();
    check L17() else D4();
  D0():
    deopt 5 [files1];
  D2():
    deopt 10 [r5];
  D4():
    deopt 14 [r6];
  L13():
    files2 = force? files1;
    checkMissing(files2);
    length = ldf length in base;
    r4 = dyn length(files2);
    check L14() else D1();
  L15():
    goto L0(r5);
  L17():
    st ignore = r6;
    file_path = ldf `file.path`;
    check L18() else D5();
  D1():
    deopt 8 [r4];
  D5():
    deopt 17 [];
  L14():
    goto L1(r4);
  L18():
    p = prom<V +>{
      pkgdir1 = ld pkgdir;
      pkgdir2 = force? pkgdir1;
      checkMissing(pkgdir2);
      return pkgdir2;
    };
    r8 = dyn file_path(p, ".Rbuildignore");
    check L19() else D6();
  D6():
    deopt 20 [r8];
  L19():
    st ignore_file = r8;
    file_exists = ldf `file.exists`;
    check L20() else D7();
  D7():
    deopt 23 [];
  L20():
    p1 = prom<V +>{
      ignore_file = ld ignore_file;
      ignore_file1 = force? ignore_file;
      checkMissing(ignore_file1);
      return ignore_file1;
    };
    r10 = dyn file_exists(p1);
    check L21() else D8();
  D8():
    deopt 25 [r10];
  L21():
    c = `as.logical`(r10);
    if c then L22() else L2();
  L2():
    goto L4();
  L4():
    ignore2 = ld ignore;
    check L30() else D13();
  L22():
    sym2 = ldf c;
    base2 = ldf c in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L23() else L24();
  D13():
    deopt 41 [ignore2];
  L3(r12):
    st ignore = r12;
    goto L4();
  L23():
    ignore = ld ignore;
    check L25() else D9();
  L24():
    r11 = dyn base2(<sym ignore>, <lang readLines(ignore_file, warn=FALSE)>);
    goto L3(r11);
  L30():
    ignore3 = force? ignore2;
    checkMissing(ignore3);
    c2 = `is.object`(ignore3);
    if c2 then L31() else L32(ignore3);
  D9():
    deopt 28 [ignore];
  L5(dx1):
    s = toForSeq(dx1);
    l = length(s);
    i = 0;
    goto L7(i);
  L25():
    ignore1 = force? ignore;
    checkMissing(ignore1);
    readLines = ldf readLines;
    check L26() else D10();
  L31():
    dr = tryDispatchBuiltin.1("[", ignore3);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L33() else L32(dr);
  L32(ignore5):
    sym3 = ldf nzchar;
    base3 = ldf nzchar in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L34() else L35();
  D10():
    deopt 31 [];
  L6(ignore8, r18):
    __ = ldf `[` in base;
    r20 = dyn __(ignore8, r18);
    goto L5(r20);
  L7(i1):
    i2 = `+`.1(i1, 1);
    c3 = `<`.1(l, i2);
    if c3 then L38() else L8();
  L26():
    p2 = prom<V +>{
      ignore_file2 = ld ignore_file;
      ignore_file3 = force? ignore_file2;
      checkMissing(ignore_file3);
      return ignore_file3;
    };
    r14 = dyn readLines[, warn](p2, FALSE);
    check L27() else D11();
  L33():
    dx = getTryDispatchBuiltinValue(dr);
    goto L5(dx);
  L34():
    ignore9 = ld ignore;
    check L36() else D14();
  L35():
    r17 = dyn base3(<sym ignore>);
    goto L6(ignore5, r17);
  D11():
    deopt 35 [r14];
  D14():
    deopt 45 [ignore5, ignore9];
  L8():
    x = `[[`(s, i2, NULL, TRUE);
    st e = x;
    exclude = ld exclude;
    check L39() else D16();
  L27():
    c1 = ldf c in base;
    r15 = dyn c1(ignore1, r14);
    check L28() else D12();
  L36():
    ignore10 = force? ignore9;
    checkMissing(ignore10);
    nzchar = ldf nzchar in base;
    r19 = dyn nzchar(ignore10);
    check L37() else D15();
  L38():
    exclude2 = ld exclude;
    check L42() else D19();
  D12():
    deopt 37 [r15];
  D15():
    deopt 48 [ignore5, r19];
  D16():
    deopt 50 [i2, exclude];
  D19():
    deopt 65 [exclude2];
  L28():
    goto L3(r15);
  L37():
    goto L6(ignore5, r19);
  L39():
    exclude1 = force? exclude;
    checkMissing(exclude1);
    grepl = ldf grepl;
    check L40() else D17();
  L42():
    exclude3 = force? exclude2;
    checkMissing(exclude3);
    popenv;
    return exclude3;
  D17():
    deopt 52 [i2, exclude1];
  L40():
    p3 = prom<V +>{
      e = ld e;
      e1 = force? e;
      checkMissing(e1);
      return e1;
    };
    p4 = prom<V +>{
      files3 = ld files;
      files4 = force? files3;
      checkMissing(files4);
      return files4;
    };
    r23 = dyn grepl[, , perl, `ignore.case`](p3, p4, TRUE, TRUE);
    check L41() else D18();
  D18():
    deopt 59 [i2, exclude1, r23];
  L41():
    r24 = `||`(exclude1, r23);
    st exclude = r24;
    goto L7(i2);
  }
}