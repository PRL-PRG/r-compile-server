fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3969495758;
    st dataentry = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3969495758(data, modes) {
  (reg data:*, reg modes:*) -+> V { var data:*, var modes:*, reg check_screen_device:cls, reg r:V, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg data1:*, reg data2:V, reg is_list:cls, reg r3:V, reg r4:V, reg c:L, reg c1:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r5:V, reg c5:L, reg r6:V, reg data3:*, reg data4:V, reg length:cls, reg r7:V, reg r8:V, reg c6:L, reg c7:V, reg c9:L, reg c10:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r9:V, reg c14:L, reg r10:V, reg vapply:cls, reg data5:*, reg data6:V, reg p:p(V +), reg is_vector:*, reg is_vector1:V, reg p1:p(V +), reg r13:V, reg all:cls, reg r14:V, reg r15:V, reg c15:L, reg c16:V, reg c18:L, reg stop:cls, reg r16:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r18:V, reg r19:V, reg modes1:*, reg modes2:V, reg is_list1:cls, reg r20:V, reg r21:V, reg c19:L, reg c20:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r22:V, reg c24:L, reg r23:V, reg modes3:*, reg modes4:V, reg length1:cls, reg r24:V, reg c25:L, reg c28:L, reg c29:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r25:V, reg c34:L, reg c35:L, reg r26:V, reg vapply1:cls, reg modes5:*, reg modes6:V, reg p2:p(V +), reg is_character:*, reg is_character1:V, reg p3:p(V +), reg r29:V, reg all1:cls, reg r30:V, reg r31:V, reg c36:L, reg c37:V, reg c40:L, reg c41:V, reg c43:L, reg stop1:cls, reg r32:V, reg grepl:cls, reg R_version:*, reg R_version1:V, reg c44:L, reg R_version3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r34:V, reg p4:p(V +), reg r36:V, reg c45:L, reg check_for_XQuartz:cls, reg file_path:cls, reg R_home:cls, reg r37:V, reg p5:p(V +), reg r39:V, reg p6:p(V +), reg r41:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r43:V, reg r44:V, reg C_dataentry:*, reg C_dataentry1:V, reg data7:*, reg data8:V, reg modes7:*, reg modes8:V, reg _External2:cls, reg r45:V |
    mkenv;
    st data = data;
    st modes = modes;
    check_screen_device = ldf check_screen_device;
    check L17() else D0();
  D0():
    deopt 1 [];
  L17():
    r = dyn check_screen_device("dataentry()");
    check L18() else D1();
  D1():
    deopt 3 [r];
  L18():
    sym = ldf `is.list`;
    base = ldf `is.list` in base;
    guard = `==`.4(sym, base);
    if guard then L19() else L20();
  L0(r2):
    r4 = `!`(r2);
    c = `as.logical`(r4);
    if c then L1(c) else L23();
  L19():
    data1 = ld data;
    check L21() else D2();
  L20():
    r1 = dyn base(<sym data>);
    goto L0(r1);
  D2():
    deopt 6 [data1];
  L1(c1):
    c9 = `as.logical`(c1);
    if c9 then L3(c9) else L29();
  L21():
    data2 = force? data1;
    checkMissing(data2);
    is_list = ldf `is.list` in base;
    r3 = dyn is_list(data2);
    check L22() else D3();
  L23():
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L24() else L25();
  D3():
    deopt 9 [r3];
  L2(c5, r6):
    r8 = `!`(r6);
    c6 = `as.logical`(r8);
    c7 = `||`(c5, c6);
    goto L1(c7);
  L3(c10):
    c18 = `as.logical`(c10);
    if c18 then L36() else L5();
  L22():
    goto L0(r3);
  L24():
    data3 = ld data;
    check L26() else D4();
  L25():
    r5 = dyn base1(<sym data>);
    goto L2(c, r5);
  L29():
    sym2 = ldf all;
    base2 = ldf all in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L30() else L31();
  D4():
    deopt 13 [c, data3];
  L4(c14, r10):
    r15 = `!`(r10);
    c15 = `as.logical`(r15);
    c16 = `||`(c14, c15);
    goto L3(c16);
  L5():
    goto L6();
  L6():
    sym3 = ldf `is.list`;
    base3 = ldf `is.list` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L40() else L41();
  L26():
    data4 = force? data3;
    checkMissing(data4);
    length = ldf length in base;
    r7 = dyn length(data4);
    check L27() else D5();
  L30():
    vapply = ldf vapply;
    check L32() else D6();
  L31():
    r9 = dyn base2(<lang vapply(data, is.vector, NA_LGL)>);
    goto L4(c9, r9);
  L36():
    stop = ldf stop;
    check L37() else D9();
  D5():
    deopt 16 [c, r7];
  D6():
    deopt 22 [c9];
  D9():
    deopt 32 [];
  L7(r19):
    r21 = `!`(r19);
    c19 = `as.logical`(r21);
    if c19 then L8(c19) else L44();
  L27():
    goto L2(c, r7);
  L32():
    p = prom<V +>{
      data5 = ld data;
      data6 = force? data5;
      checkMissing(data6);
      return data6;
    };
    p1 = prom<V +>{
      is_vector = ld `is.vector`;
      is_vector1 = force? is_vector;
      checkMissing(is_vector1);
      return is_vector1;
    };
    r13 = dyn vapply(p, p1, NA_LGL);
    check L33() else D7();
  L37():
    r16 = dyn stop("invalid 'data' argument");
    check L38() else D10();
  L40():
    modes1 = ld modes;
    check L42() else D11();
  L41():
    r18 = dyn base3(<sym modes>);
    goto L7(r18);
  D7():
    deopt 26 [c9, r13];
  D10():
    deopt 34 [r16];
  D11():
    deopt 39 [modes1];
  L8(c20):
    c43 = `as.logical`(c20);
    if c43 then L57() else L12();
  L33():
    all = ldf all in base;
    r14 = dyn all(r13);
    check L34() else D8();
  L38():
    goto L6();
  L42():
    modes2 = force? modes1;
    checkMissing(modes2);
    is_list1 = ldf `is.list` in base;
    r20 = dyn is_list1(modes2);
    check L43() else D12();
  L44():
    sym4 = ldf length;
    base4 = ldf length in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L45() else L46();
  D8():
    deopt 28 [c9, r14];
  D12():
    deopt 42 [r20];
  L9(c24, r23):
    c25 = `as.logical`(r23);
    if c25 then L49() else L10(c24, c25);
  L12():
    goto L13();
  L13():
    grepl = ldf grepl;
    check L61() else D20();
  L34():
    goto L4(c9, r14);
  L43():
    goto L7(r20);
  L45():
    modes3 = ld modes;
    check L47() else D13();
  L46():
    r22 = dyn base4(<sym modes>);
    goto L9(c19, r22);
  L57():
    stop1 = ldf stop;
    check L58() else D18();
  D13():
    deopt 46 [c19, modes3];
  D18():
    deopt 64 [];
  D20():
    deopt 70 [];
  L10(c28, c29):
    c40 = `as.logical`(c29);
    c41 = `||`(c28, c40);
    goto L8(c41);
  L47():
    modes4 = force? modes3;
    checkMissing(modes4);
    length1 = ldf length in base;
    r24 = dyn length1(modes4);
    check L48() else D14();
  L49():
    sym5 = ldf all;
    base5 = ldf all in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L50() else L51();
  L58():
    r32 = dyn stop1("invalid 'modes' argument");
    check L59() else D19();
  L61():
    p4 = prom<V +>{
      R_version = ld `R.version`;
      R_version1 = force? R_version;
      checkMissing(R_version1);
      c44 = `is.object`(R_version1);
      if c44 then L1() else L2(R_version1);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("$", R_version1);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(R_version3):
      r34 = `$`(R_version3, <sym os>);
      goto L0(r34);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    r36 = dyn grepl("darwin", p4);
    check L62() else D21();
  D14():
    deopt 49 [c19, r24];
  D19():
    deopt 66 [r32];
  D21():
    deopt 73 [r36];
  L11(c34, c35, r26):
    r31 = `!`(r26);
    c36 = `as.logical`(r31);
    c37 = `&&`(c35, c36);
    goto L10(c34, c37);
  L48():
    goto L9(c19, r24);
  L50():
    vapply1 = ldf vapply;
    check L52() else D15();
  L51():
    r25 = dyn base5(<lang vapply(modes, is.character, NA_LGL)>);
    goto L11(c24, c25, r25);
  L59():
    goto L13();
  L62():
    c45 = `as.logical`(r36);
    if c45 then L63() else L14();
  D15():
    deopt 53 [c24, c25];
  L14():
    goto L15();
  L15():
    sym6 = ldf `.External2`;
    base6 = ldf `.External2` in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L67() else L68();
  L52():
    p2 = prom<V +>{
      modes5 = ld modes;
      modes6 = force? modes5;
      checkMissing(modes6);
      return modes6;
    };
    p3 = prom<V +>{
      is_character = ld `is.character`;
      is_character1 = force? is_character;
      checkMissing(is_character1);
      return is_character1;
    };
    r29 = dyn vapply1(p2, p3, NA_LGL);
    check L53() else D16();
  L63():
    check_for_XQuartz = ldf check_for_XQuartz;
    check L64() else D22();
  D16():
    deopt 57 [c24, c25, r29];
  D22():
    deopt 75 [];
  L16(r44):
    popenv;
    return r44;
  L53():
    all1 = ldf all in base;
    r30 = dyn all1(r29);
    check L54() else D17();
  L64():
    p6 = prom<V +>{
      file_path = ldf `file.path`;
      p5 = prom<V +>{
        R_home = ldf `R.home`;
        r37 = dyn R_home("modules");
        return r37;
      };
      r39 = dyn file_path(p5, "R_de.so");
      return r39;
    };
    r41 = dyn check_for_XQuartz(p6);
    check L65() else D23();
  L67():
    C_dataentry = ld C_dataentry;
    check L69() else D24();
  L68():
    r43 = dyn base6(<sym C_dataentry>, <sym data>, <sym modes>);
    goto L16(r43);
  D17():
    deopt 59 [c24, c25, r30];
  D23():
    deopt 77 [r41];
  D24():
    deopt 82 [C_dataentry];
  L54():
    goto L11(c24, c25, r30);
  L65():
    goto L15();
  L69():
    C_dataentry1 = force? C_dataentry;
    checkMissing(C_dataentry1);
    data7 = ld data;
    check L70() else D25();
  D25():
    deopt 84 [data7];
  L70():
    data8 = force? data7;
    checkMissing(data8);
    modes7 = ld modes;
    check L71() else D26();
  D26():
    deopt 86 [modes7];
  L71():
    modes8 = force? modes7;
    checkMissing(modes8);
    _External2 = ldf `.External2` in base;
    r45 = dyn _External2(C_dataentry1, data8, modes8);
    check L72() else D27();
  D27():
    deopt 89 [r45];
  L72():
    goto L16(r45);
  }
}