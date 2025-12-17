fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2044426018;
    st `as.hclust.dendrogram` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2044426018(x, `...`) {
  (reg x:*, reg ddd:dots) -+> V { var x:*, var `...`:dots?, reg stopifnot:cls, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg is_list:cls, reg r2:V, reg p:p(V +), reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg r5:V, reg x3:*, reg x4:V, reg length:cls, reg r6:V, reg r7:V, reg p1:p(V +), reg r9:V, reg nleaves:cls, reg x5:*, reg x6:V, reg p2:p(V +), reg r11:V, reg stopifnot1:cls, reg n:*, reg n1:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r12:V, reg n4:V, reg r13:V, reg x7:*, reg x8:V, reg attr:cls, reg r14:V, reg r15:V, reg p3:p(V +), reg r17:V, reg integer:cls, reg n5:*, reg n6:V, reg p4:p(V +), reg r19:V, reg character:cls, reg n7:*, reg n8:V, reg p5:p(V +), reg r21:V, reg n9:*, reg n10:V, reg r22:V, reg numeric:cls, reg n_h:*, reg n_h1:V, reg p6:p(V +), reg r24:V, reg matrix:cls, reg n_h2:*, reg n_h3:V, reg p7:p(V +), reg r26:V, reg matrix1:cls, reg n_h4:*, reg n_h5:V, reg p8:p(V +), reg r28:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r29:V, reg r30:V, reg x9:*, reg x10:V, reg length1:cls, reg r31:V, reg c:L, reg position:*, reg position1:V, reg r32:V, reg c1:L, reg nodeCount:*, reg nodeCount1:V, reg r33:V, reg nodeCount2:*, reg nodeCount3:V, reg nodeCount4:*, reg nodeCount5:V, reg r34:V, reg c2:L, reg sym4:cls, reg base4:cls, reg guard4:L, reg r35:V, reg r36:V, reg stack:*, reg stack1:V, reg c3:L, reg stack3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r37:V, reg stack4:*, reg stack5:V, reg c4:L, reg stack7:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r38:V, reg c5:cls, reg r39:V, reg l:*, reg c6:L, reg r41:V, reg l2:*, reg dr4:V, reg dc2:L, reg dx4:V, reg r43:V, reg dx5:V, reg nodeCount6:*, reg nodeCount7:V, reg ___:cls, reg r44:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r46:V, reg r47:V, reg x11:*, reg x12:V, reg attr1:cls, reg r48:V, reg l3:*, reg c7:L, reg r50:V, reg l5:*, reg dr6:V, reg dc3:L, reg dx6:V, reg r52:V, reg dx7:V, reg nodeCount8:*, reg nodeCount9:V, reg ___1:cls, reg r53:V, reg position2:*, reg position3:V, reg r55:V, reg x13:*, reg x14:V, reg c8:L, reg x16:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg __:cls, reg r56:V, reg x17:*, reg x18:V, reg c9:L, reg x20:V, reg dr10:V, reg dc5:L, reg dx10:V, reg dx11:V, reg __1:cls, reg r57:V, reg is_leaf:cls, reg child:*, reg child1:V, reg p9:p(V +), reg r59:V, reg c10:L, reg leafCount:*, reg leafCount1:V, reg r60:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r61:V, reg r62:V, reg child2:*, reg child3:V, reg attr2:cls, reg r63:V, reg l6:*, reg c11:L, reg r65:V, reg l8:*, reg dr12:V, reg dc6:L, reg dx12:V, reg dx13:V, reg leafCount2:*, reg leafCount3:V, reg ___2:cls, reg r68:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r69:V, reg r70:V, reg child4:*, reg child5:V, reg as_integer:cls, reg r71:V, reg l9:*, reg c12:L, reg r73:V, reg l11:*, reg dr14:V, reg dc7:L, reg dx14:V, reg dx15:V, reg leafCount4:*, reg leafCount5:V, reg ___3:cls, reg r76:V, reg ord:*, reg ord1:V, reg c13:L, reg ord3:V, reg dr16:V, reg dc8:L, reg dx16:V, reg dx17:V, reg leafCount6:*, reg leafCount7:V, reg __2:cls, reg r77:V, reg r78:V, reg l12:*, reg c14:L, reg r80:V, reg l14:*, reg dr18:V, reg dc9:L, reg dx18:V, reg r82:V, reg dx19:V, reg position4:*, reg position5:V, reg myNodeIndex:*, reg myNodeIndex1:V, reg ___4:cls, reg r83:V, reg stopifnot2:cls, reg sym8:cls, reg base8:cls, reg guard8:L, reg r85:V, reg r86:V, reg child6:*, reg child7:V, reg length2:cls, reg r87:V, reg r88:V, reg p10:p(V +), reg r90:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r91:V, reg r92:V, reg x21:*, reg x22:V, reg position6:*, reg position7:V, reg myNodeIndex2:*, reg myNodeIndex3:V, reg stack8:*, reg stack9:V, reg list:cls, reg r93:V, reg child8:*, reg child9:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r94:V, reg r95:V, reg stack10:*, reg stack11:V, reg c15:V, reg c16:L, reg stack12:*, reg stack13:V, reg c17:L, reg stack15:V, reg dr20:V, reg dc10:L, reg dx20:V, reg dx21:V, reg r97:V, reg stack16:*, reg stack17:V, reg c18:L, reg stack19:V, reg dr22:V, reg dc11:L, reg dx22:V, reg dx23:V, reg r98:V, reg stack20:*, reg stack21:V, reg c19:L, reg stack23:V, reg dr24:V, reg dc12:L, reg dx24:V, reg dx25:V, reg r99:V, reg stack24:*, reg stack25:V, reg c20:L, reg stack27:V, reg dr26:V, reg dc13:L, reg dx26:V, reg dx27:V, reg r100:V, reg sort_list:cls, reg ord4:*, reg ord5:V, reg p11:p(V +), reg r102:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r103:V, reg r104:V, reg ord6:*, reg ord7:V, reg c21:L, reg ord9:V, reg dr28:V, reg dc14:L, reg dx28:V, reg dx29:V, reg iOrd:*, reg iOrd1:V, reg __3:cls, reg r105:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r106:V, reg r107:V, reg n11:*, reg n12:V, reg r108:I, reg identical:cls, reg r109:V, reg r110:V, reg c22:L, reg stop:cls, reg gettextf:cls, reg n13:*, reg n14:V, reg p12:p(V +), reg r112:V, reg p13:p(V +), reg r114:V, reg sort_list1:cls, reg height:*, reg height1:V, reg p14:p(V +), reg r117:V, reg c23:L, reg r119:V, reg dr30:V, reg dc15:L, reg dx30:V, reg dx31:V, reg n_h6:*, reg n_h7:V, reg r120:V, reg __4:cls, reg r121:V, reg stopifnot3:cls, reg ii:*, reg ii1:V, reg c24:L, reg ii3:V, reg dr32:V, reg dc16:L, reg dx32:V, reg dx33:V, reg n_h8:*, reg n_h9:V, reg __5:cls, reg r122:V, reg r123:V, reg p15:p(V +), reg r125:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r126:V, reg r127:V, reg n_h10:*, reg n_h11:V, reg r128:V, reg r129:I, reg k:*, reg k1:V, reg r130:V, reg l15:*, reg c25:L, reg r132:V, reg l17:*, reg dr34:V, reg dc17:L, reg dx34:V, reg dx35:V, reg t:cls, reg myIdx:*, reg myIdx1:V, reg c26:L, reg myIdx3:V, reg dr36:V, reg dc18:L, reg dx36:V, reg dx37:V, reg ii4:*, reg ii5:V, reg c27:L, reg myIdx5:V, reg ii7:V, reg dr38:V, reg dc19:L, reg dx38:V, reg dx39:V, reg k2:*, reg k3:V, reg __6:cls, reg r135:V, reg __7:cls, reg r136:V, reg p16:p(V +), reg r138:V, reg ___5:cls, reg r139:V, reg getOption:cls, reg r140:V, reg c28:L, reg sym14:cls, reg base14:cls, reg guard14:L, reg r141:V, reg r142:V, reg n_h12:*, reg n_h13:V, reg r143:I, reg s:V, reg l18:I, reg i:I, reg i1:I, reg i2:I, reg c29:L, reg x23:V, reg cat:cls, reg sprintf:cls, reg k4:*, reg k5:V, reg p17:p(V +), reg ii8:*, reg ii9:V, reg c30:L, reg ii11:V, reg dr40:V, reg dc20:L, reg dx40:V, reg dx41:V, reg k6:*, reg k7:V, reg __8:cls, reg r145:V, reg p18:p(V +), reg r147:V, reg p19:p(V +), reg r149:V, reg cat1:cls, reg r150:V, reg str:cls, reg merge:*, reg merge1:V, reg c31:L, reg merge3:V, reg dr42:V, reg dc21:L, reg dx42:V, reg dx43:V, reg ii12:*, reg ii13:V, reg c32:L, reg merge5:V, reg ii15:V, reg dr44:V, reg dc22:L, reg dx44:V, reg dx45:V, reg k8:*, reg k9:V, reg __9:cls, reg r151:V, reg __10:cls, reg r152:V, reg p20:p(V +), reg r154:V, reg structure:cls, reg sym15:cls, reg base15:cls, reg guard15:L, reg r155:V, reg r156:V, reg t1:cls, reg merge8:*, reg merge9:V, reg c33:L, reg dr46:V, reg dc23:L, reg dx46:V, reg dx47:V, reg ii16:*, reg ii17:V, reg __11:cls, reg r157:V, reg p21:p(V +), reg r159:V, reg height2:*, reg height3:V, reg c34:L, reg height5:V, reg dr48:V, reg dc24:L, reg dx48:V, reg dx49:V, reg ii18:*, reg ii19:V, reg __12:cls, reg r160:V, reg ord10:*, reg ord11:V, reg labsu:*, reg labsu1:V, reg c35:L, reg labsu3:V, reg dr50:V, reg dc25:L, reg dx50:V, reg dx51:V, reg iOrd2:*, reg iOrd3:V, reg __13:cls, reg r161:V, reg match_call:cls, reg r162:V, reg list1:cls, reg r163:V, reg p22:p(V +), reg r165:V |
    mkenv;
    st x = x;
    st `...` = ddd;
    stopifnot = ldf stopifnot;
    check L39() else D0();
  D0():
    deopt 1 [];
  L39():
    p = prom<V +>{
      sym = ldf `is.list`;
      base = ldf `is.list` in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r1):
      return r1;
    L1():
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      is_list = ldf `is.list` in base;
      r2 = dyn is_list(x2);
      goto L0(r2);
    L2():
      r = dyn base(<sym x>);
      goto L0(r);
    };
    p1 = prom<V +>{
      sym1 = ldf length;
      base1 = ldf length in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r5):
      r7 = `==`(r5, 2);
      return r7;
    L1():
      x3 = ld x;
      x4 = force? x3;
      checkMissing(x4);
      length = ldf length in base;
      r6 = dyn length(x4);
      goto L0(r6);
    L2():
      r4 = dyn base1(<sym x>);
      goto L0(r4);
    };
    r9 = dyn stopifnot(p, p1);
    check L40() else D1();
  D1():
    deopt 4 [r9];
  L40():
    nleaves = ldf nleaves;
    check L41() else D2();
  D2():
    deopt 6 [];
  L41():
    p2 = prom<V +>{
      x5 = ld x;
      x6 = force? x5;
      checkMissing(x6);
      return x6;
    };
    r11 = dyn nleaves(p2);
    check L42() else D3();
  D3():
    deopt 8 [r11];
  L42():
    st n = r11;
    stopifnot1 = ldf stopifnot;
    check L43() else D4();
  D4():
    deopt 11 [];
  L43():
    p3 = prom<V +>{
      n = ld n;
      n1 = force? n;
      checkMissing(n1);
      sym2 = ldf attr;
      base2 = ldf attr in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(n4, r13):
      r15 = `==`(n4, r13);
      return r15;
    L1():
      x7 = ld x;
      x8 = force? x7;
      checkMissing(x8);
      attr = ldf attr in base;
      r14 = dyn attr(x8, "members");
      goto L0(n1, r14);
    L2():
      r12 = dyn base2(<sym x>, "members");
      goto L0(n1, r12);
    };
    r17 = dyn stopifnot1(p3);
    check L44() else D5();
  D5():
    deopt 13 [r17];
  L44():
    integer = ldf integer;
    check L45() else D6();
  D6():
    deopt 15 [];
  L45():
    p4 = prom<V +>{
      n5 = ld n;
      n6 = force? n5;
      checkMissing(n6);
      return n6;
    };
    r19 = dyn integer(p4);
    check L46() else D7();
  D7():
    deopt 17 [r19];
  L46():
    st ord = r19;
    character = ldf character;
    check L47() else D8();
  D8():
    deopt 20 [];
  L47():
    p5 = prom<V +>{
      n7 = ld n;
      n8 = force? n7;
      checkMissing(n8);
      return n8;
    };
    r21 = dyn character(p5);
    check L48() else D9();
  D9():
    deopt 22 [r21];
  L48():
    st labsu = r21;
    n9 = ld n;
    check L49() else D10();
  D10():
    deopt 24 [n9];
  L49():
    n10 = force? n9;
    checkMissing(n10);
    r22 = `-`(n10, 1);
    st `n.h` = r22;
    numeric = ldf numeric;
    check L50() else D11();
  D11():
    deopt 30 [];
  L50():
    p6 = prom<V +>{
      n_h = ld `n.h`;
      n_h1 = force? n_h;
      checkMissing(n_h1);
      return n_h1;
    };
    r24 = dyn numeric(p6);
    check L51() else D12();
  D12():
    deopt 32 [r24];
  L51():
    st height = r24;
    matrix = ldf matrix;
    check L52() else D13();
  D13():
    deopt 35 [];
  L52():
    p7 = prom<V +>{
      n_h2 = ld `n.h`;
      n_h3 = force? n_h2;
      checkMissing(n_h3);
      return n_h3;
    };
    r26 = dyn matrix(NA_INT, 2, p7);
    check L53() else D14();
  D14():
    deopt 39 [r26];
  L53():
    st myIdx = r26;
    matrix1 = ldf matrix;
    check L54() else D15();
  D15():
    deopt 42 [];
  L54():
    p8 = prom<V +>{
      n_h4 = ld `n.h`;
      n_h5 = force? n_h4;
      checkMissing(n_h5);
      return n_h5;
    };
    r28 = dyn matrix1(NA_INT, 2, p8);
    check L55() else D16();
  D16():
    deopt 46 [r28];
  L55():
    st merge = r28;
    st position = 0;
    st stack = NULL;
    st leafCount = 0;
    st nodeCount = 0;
    goto L21();
  L21():
    sym3 = ldf length;
    base3 = ldf length in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L56() else L57();
  L0(r30):
    c = `as.logical`(r30);
    if c then L60() else L1();
  L56():
    x9 = ld x;
    check L58() else D17();
  L57():
    r29 = dyn base3(<sym x>);
    goto L0(r29);
  D17():
    deopt 62 [x9];
  L1():
    sym10 = ldf `is.null`;
    base10 = ldf `is.null` in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L145() else L146();
  L58():
    x10 = force? x9;
    checkMissing(x10);
    length1 = ldf length in base;
    r31 = dyn length1(x10);
    check L59() else D18();
  L60():
    position = ld position;
    check L61() else D19();
  D18():
    deopt 65 [r31];
  D19():
    deopt 66 [position];
  L22(r95):
    c16 = `as.logical`(r95);
    if c16 then L148() else L23();
  L59():
    goto L0(r31);
  L61():
    position1 = force? position;
    checkMissing(position1);
    r32 = `==`(position1, 0);
    c1 = `as.logical`(r32);
    if c1 then L62() else L2();
  L145():
    stack10 = ld stack;
    check L147() else D54();
  L146():
    r94 = dyn base10(<sym stack>);
    goto L22(r94);
  D54():
    deopt 207 [stack10];
  L2():
    goto L9();
  L9():
    position2 = ld position;
    check L94() else D30();
  L23():
    stack12 = ld stack;
    check L151() else D55();
  L62():
    nodeCount = ld nodeCount;
    check L63() else D20();
  L147():
    stack11 = force? stack10;
    checkMissing(stack11);
    c15 = `==`(stack11, NULL);
    goto L22(c15);
  L148():
    sort_list = ldf `sort.list`;
    check L172() else D59();
  D20():
    deopt 70 [nodeCount];
  D30():
    deopt 115 [position2];
  D55():
    deopt 214 [stack12];
  D59():
    deopt 234 [];
  L63():
    nodeCount1 = force? nodeCount;
    checkMissing(nodeCount1);
    r33 = `+`(nodeCount1, 1);
    st nodeCount = r33;
    nodeCount2 = ld nodeCount;
    check L64() else D21();
  L94():
    position3 = force? position2;
    checkMissing(position3);
    r55 = `+`(position3, 1);
    st position = r55;
    x13 = ld x;
    check L95() else D31();
  L151():
    stack13 = force? stack12;
    checkMissing(stack13);
    c17 = `is.object`(stack13);
    if c17 then L153() else L154(stack13);
  L172():
    p11 = prom<V +>{
      ord4 = ld ord;
      ord5 = force? ord4;
      checkMissing(ord5);
      return ord5;
    };
    r102 = dyn sort_list(p11);
    check L173() else D60();
  D21():
    deopt 75 [nodeCount2];
  D31():
    deopt 120 [x13];
  D60():
    deopt 236 [r102];
  L64():
    nodeCount3 = force? nodeCount2;
    checkMissing(nodeCount3);
    st myNodeIndex = nodeCount3;
    nodeCount4 = ld nodeCount;
    check L65() else D22();
  L95():
    x14 = force? x13;
    checkMissing(x14);
    c8 = `is.object`(x14);
    if c8 then L96() else L97(x14);
  L152(dx21):
    st position = dx21;
    stack16 = ld stack;
    check L156() else D56();
  L153():
    dr20 = tryDispatchBuiltin.1("$", stack13);
    dc10 = getTryDispatchBuiltinDispatched(dr20);
    if dc10 then L155() else L154(dr20);
  L154(stack15):
    r97 = `$`(stack15, <sym position>);
    goto L152(r97);
  L173():
    st iOrd = r102;
    sym11 = ldf identical;
    base11 = ldf identical in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L174() else L175();
  D22():
    deopt 78 [nodeCount4];
  D56():
    deopt 218 [stack16];
  L10(dx9):
    st child = dx9;
    x17 = ld x;
    check L99() else D32();
  L26(r104):
    r110 = `!`(r104);
    c22 = `as.logical`(r110);
    if c22 then L185() else L29();
  L65():
    nodeCount5 = force? nodeCount4;
    checkMissing(nodeCount5);
    r34 = `!=`(nodeCount5, 1);
    c2 = `as.logical`(r34);
    if c2 then L66() else L3();
  L96():
    dr8 = tryDispatchBuiltin.1("[[", x14);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L98() else L97(dr8);
  L97(x16):
    __ = ldf `[[` in base;
    r56 = dyn __(x16, 1);
    goto L10(r56);
  L155():
    dx20 = getTryDispatchBuiltinValue(dr20);
    goto L152(dx20);
  L156():
    stack17 = force? stack16;
    checkMissing(stack17);
    c18 = `is.object`(stack17);
    if c18 then L158() else L159(stack17);
  L174():
    ord6 = ld ord;
    check L176() else D61();
  L175():
    r103 = dyn base11(<lang `[`(ord, iOrd)>, <lang seq_len(n)>);
    goto L26(r103);
  D32():
    deopt 126 [x17];
  D61():
    deopt 240 [ord6];
  L3():
    goto L6();
  L6():
    sym5 = ldf attr;
    base5 = ldf attr in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L85() else L86();
  L29():
    goto L30();
  L30():
    sort_list1 = ldf `sort.list`;
    check L189() else D67();
  L66():
    sym4 = ldf c;
    base4 = ldf c in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L67() else L68();
  L98():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L10(dx8);
  L99():
    x18 = force? x17;
    checkMissing(x18);
    c9 = `is.object`(x18);
    if c9 then L100() else L101(x18);
  L157(dx23):
    st x = dx23;
    stack20 = ld stack;
    check L161() else D57();
  L158():
    dr22 = tryDispatchBuiltin.1("$", stack17);
    dc11 = getTryDispatchBuiltinDispatched(dr22);
    if dc11 then L160() else L159(dr22);
  L159(stack19):
    r98 = `$`(stack19, <sym node>);
    goto L157(r98);
  L176():
    ord7 = force? ord6;
    checkMissing(ord7);
    c21 = `is.object`(ord7);
    if c21 then L177() else L178(ord7);
  L185():
    stop = ldf stop;
    check L186() else D65();
  D57():
    deopt 222 [stack20];
  D65():
    deopt 260 [];
  D67():
    deopt 268 [];
  L4(r36):
    l = ld myIdx;
    c6 = `is.object`(l);
    if c6 then L80() else L81(r36, l);
  L7(r47):
    l3 = ld height;
    c7 = `is.object`(l3);
    if c7 then L89() else L90(r47, l3);
  L11(dx11):
    st x = dx11;
    is_leaf = ldf `is.leaf`;
    check L103() else D33();
  L27(dx29):
    sym12 = ldf seq_len;
    base12 = ldf seq_len in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L181() else L182();
  L67():
    stack = ld stack;
    check L69() else D23();
  L68():
    r35 = dyn base4(<lang `$`(stack, position)>, <lang `$`(stack, myNodeIndex)>);
    goto L4(r35);
  L85():
    x11 = ld x;
    check L87() else D27();
  L86():
    r46 = dyn base5(<sym x>, "height");
    goto L7(r46);
  L100():
    dr10 = tryDispatchBuiltin.1("[", x18);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L102() else L101(dr10);
  L101(x20):
    __1 = ldf `[` in base;
    r57 = dyn __1(x20, -1);
    goto L11(r57);
  L160():
    dx22 = getTryDispatchBuiltinValue(dr22);
    goto L157(dx22);
  L161():
    stack21 = force? stack20;
    checkMissing(stack21);
    c19 = `is.object`(stack21);
    if c19 then L163() else L164(stack21);
  L177():
    dr28 = tryDispatchBuiltin.1("[", ord7);
    dc14 = getTryDispatchBuiltinDispatched(dr28);
    if dc14 then L179() else L178(dr28);
  L178(ord9):
    iOrd = ld iOrd;
    check L180() else D62();
  L186():
    p13 = prom<V +>{
      gettextf = ldf gettextf;
      p12 = prom<V +>{
        n13 = ld n;
        n14 = force? n13;
        checkMissing(n14);
        return n14;
      };
      r112 = dyn gettextf("dendrogram entries must be 1,2,..,%d (in any order), to be coercible to \"hclust\"", p12);
      return r112;
    };
    r114 = dyn stop[, domain](p13, NA_LGL);
    check L187() else D66();
  L189():
    p14 = prom<V +>{
      height = ld height;
      height1 = force? height;
      checkMissing(height1);
      return height1;
    };
    r117 = dyn sort_list1[, decreasing](p14, TRUE);
    check L190() else D68();
  D23():
    deopt 84 [stack];
  D27():
    deopt 103 [x11];
  D33():
    deopt 133 [];
  D62():
    deopt 242 [ord9, iOrd];
  D66():
    deopt 264 [r114];
  D68():
    deopt 272 [r117];
  L5(r43, dx5):
    st myIdx = dx5;
    goto L6();
  L8(r52, dx7):
    st height = dx7;
    goto L9();
  L28(r107):
    identical = ldf identical in base;
    r109 = dyn identical(dx29, r107, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
    check L184() else D64();
  L69():
    stack1 = force? stack;
    checkMissing(stack1);
    c3 = `is.object`(stack1);
    if c3 then L71() else L72(stack1);
  L80():
    dr4 = tryDispatchBuiltin.0("[<-", l, r36);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L82() else L81(r36, dr4);
  L81(r41, l2):
    nodeCount6 = ld nodeCount;
    check L83() else D26();
  L87():
    x12 = force? x11;
    checkMissing(x12);
    attr1 = ldf attr in base;
    r48 = dyn attr1(x12, "height");
    check L88() else D28();
  L89():
    dr6 = tryDispatchBuiltin.0("[<-", l3, r47);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L91() else L90(r47, dr6);
  L90(r50, l5):
    nodeCount8 = ld nodeCount;
    check L92() else D29();
  L102():
    dx10 = getTryDispatchBuiltinValue(dr10);
    goto L11(dx10);
  L103():
    p9 = prom<V +>{
      child = ld child;
      child1 = force? child;
      checkMissing(child1);
      return child1;
    };
    r59 = dyn is_leaf(p9);
    check L104() else D34();
  L162(dx25):
    st myNodeIndex = dx25;
    stack24 = ld stack;
    check L166() else D58();
  L163():
    dr24 = tryDispatchBuiltin.1("$", stack21);
    dc12 = getTryDispatchBuiltinDispatched(dr24);
    if dc12 then L165() else L164(dr24);
  L164(stack23):
    r99 = `$`(stack23, <sym myNodeIndex>);
    goto L162(r99);
  L179():
    dx28 = getTryDispatchBuiltinValue(dr28);
    goto L27(dx28);
  L180():
    iOrd1 = force? iOrd;
    __3 = ldf `[` in base;
    r105 = dyn __3(ord9, iOrd1);
    goto L27(r105);
  L181():
    n11 = ld n;
    check L183() else D63();
  L182():
    r106 = dyn base12(<sym n>);
    goto L28(r106);
  L187():
    goto L30();
  L190():
    c23 = `is.object`(r117);
    if c23 then L191() else L192(r117);
  D26():
    deopt 94 [r41, l2, r36, nodeCount6];
  D28():
    deopt 107 [r48];
  D29():
    deopt 109 [r50, l5, r47, nodeCount8];
  D34():
    deopt 135 [r59];
  D58():
    deopt 226 [stack24];
  D63():
    deopt 246 [n11];
  D64():
    deopt 257 [r109];
  L31(dx31):
    st ii = dx31;
    stopifnot3 = ldf stopifnot;
    check L195() else D70();
  L70(dx1):
    stack4 = ld stack;
    check L74() else D24();
  L71():
    dr = tryDispatchBuiltin.1("$", stack1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L73() else L72(dr);
  L72(stack3):
    r37 = `$`(stack3, <sym position>);
    goto L70(r37);
  L82():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L5(r36, dx4);
  L83():
    nodeCount7 = force? nodeCount6;
    ___ = ldf `[<-` in base;
    r44 = dyn ___(l, <missing>, nodeCount7, r36);
    goto L5(r41, r44);
  L88():
    goto L7(r48);
  L91():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L8(r47, dx6);
  L92():
    nodeCount9 = force? nodeCount8;
    ___1 = ldf `[<-` in base;
    r53 = dyn ___1(l5, r47, nodeCount9);
    goto L8(r50, r53);
  L104():
    c10 = `as.logical`(r59);
    if c10 then L105() else L12();
  L165():
    dx24 = getTryDispatchBuiltinValue(dr24);
    goto L162(dx24);
  L166():
    stack25 = force? stack24;
    checkMissing(stack25);
    c20 = `is.object`(stack25);
    if c20 then L168() else L169(stack25);
  L183():
    n12 = force? n11;
    checkMissing(n12);
    r108 = seq_len(n12);
    goto L28(r108);
  L184():
    goto L26(r109);
  L191():
    dr30 = tryDispatchBuiltin.1("[", r117);
    dc15 = getTryDispatchBuiltinDispatched(dr30);
    if dc15 then L193() else L192(dr30);
  L192(r119):
    n_h6 = ld `n.h`;
    check L194() else D69();
  D24():
    deopt 87 [stack4];
  D69():
    deopt 273 [r119, n_h6];
  D70():
    deopt 280 [];
  L12():
    stopifnot2 = ldf stopifnot;
    check L134() else D46();
  L19():
    goto L21();
  L73():
    dx = getTryDispatchBuiltinValue(dr);
    goto L70(dx);
  L74():
    stack5 = force? stack4;
    checkMissing(stack5);
    c4 = `is.object`(stack5);
    if c4 then L76() else L77(stack5);
  L105():
    leafCount = ld leafCount;
    check L106() else D35();
  L167(dx27):
    st stack = dx27;
    goto L21();
  L168():
    dr26 = tryDispatchBuiltin.1("$", stack25);
    dc13 = getTryDispatchBuiltinDispatched(dr26);
    if dc13 then L170() else L169(dr26);
  L169(stack27):
    r100 = `$`(stack27, <sym stack>);
    goto L167(r100);
  L193():
    dx30 = getTryDispatchBuiltinValue(dr30);
    goto L31(dx30);
  L194():
    n_h7 = force? n_h6;
    checkMissing(n_h7);
    r120 = `:`(n_h7, 1);
    __4 = ldf `[` in base;
    r121 = dyn __4(r119, r120);
    goto L31(r121);
  L195():
    p15 = prom<V +>{
      ii = ld ii;
      ii1 = force? ii;
      checkMissing(ii1);
      c24 = `is.object`(ii1);
      if c24 then L1() else L2(ii1);
    L0(dx33):
      r123 = `==`(dx33, 1);
      return r123;
    L1():
      dr32 = tryDispatchBuiltin.1("[", ii1);
      dc16 = getTryDispatchBuiltinDispatched(dr32);
      if dc16 then L3() else L2(dr32);
    L2(ii3):
      n_h8 = ld `n.h`;
      n_h9 = force? n_h8;
      __5 = ldf `[` in base;
      r122 = dyn __5(ii3, n_h9);
      goto L0(r122);
    L3():
      dx32 = getTryDispatchBuiltinValue(dr32);
      goto L0(dx32);
    };
    r125 = dyn stopifnot3(p15);
    check L196() else D71();
  D35():
    deopt 136 [leafCount];
  D46():
    deopt 177 [];
  D71():
    deopt 282 [r125];
  L75(dx3):
    c5 = ldf c in base;
    r39 = dyn c5(dx1, dx3);
    check L79() else D25();
  L76():
    dr2 = tryDispatchBuiltin.1("$", stack5);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L78() else L77(dr2);
  L77(stack7):
    r38 = `$`(stack7, <sym myNodeIndex>);
    goto L75(r38);
  L106():
    leafCount1 = force? leafCount;
    checkMissing(leafCount1);
    r60 = `+`(leafCount1, 1);
    st leafCount = r60;
    sym6 = ldf attr;
    base6 = ldf attr in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L107() else L108();
  L134():
    p10 = prom<V +>{
      sym8 = ldf length;
      base8 = ldf length in base;
      guard8 = `==`.4(sym8, base8);
      if guard8 then L1() else L2();
    L0(r86):
      r88 = `==`(r86, 2);
      return r88;
    L1():
      child6 = ld child;
      child7 = force? child6;
      checkMissing(child7);
      length2 = ldf length in base;
      r87 = dyn length2(child7);
      goto L0(r87);
    L2():
      r85 = dyn base8(<sym child>);
      goto L0(r85);
    };
    r90 = dyn stopifnot2(p10);
    check L135() else D47();
  L170():
    dx26 = getTryDispatchBuiltinValue(dr26);
    goto L167(dx26);
  L196():
    sym13 = ldf seq_len;
    base13 = ldf seq_len in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L197() else L198();
  D25():
    deopt 91 [r39];
  D47():
    deopt 179 [r90];
  L13(r62):
    l6 = ld labsu;
    c11 = `is.object`(l6);
    if c11 then L111() else L112(r62, l6);
  L32(r127):
    st k = r127;
    k = ld k;
    check L200() else D73();
  L78():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L75(dx2);
  L79():
    goto L4(r39);
  L107():
    child2 = ld child;
    check L109() else D36();
  L108():
    r61 = dyn base6(<sym child>, "label");
    goto L13(r61);
  L135():
    sym9 = ldf list;
    base9 = ldf list in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L136() else L137();
  L197():
    n_h10 = ld `n.h`;
    check L199() else D72();
  L198():
    r126 = dyn base13(<lang `-`(n.h, 1)>);
    goto L32(r126);
  D36():
    deopt 143 [child2];
  D72():
    deopt 284 [n_h10];
  D73():
    deopt 290 [k];
  L14(dx13):
    st labsu = dx13;
    sym7 = ldf `as.integer`;
    base7 = ldf `as.integer` in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L115() else L116();
  L20(r92):
    st stack = r92;
    child8 = ld child;
    check L143() else D53();
  L109():
    child3 = force? child2;
    checkMissing(child3);
    attr2 = ldf attr in base;
    r63 = dyn attr2(child3, "label");
    check L110() else D37();
  L111():
    dr12 = tryDispatchBuiltin.0("[<-", l6, r62);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L113() else L112(r62, dr12);
  L112(r65, l8):
    leafCount2 = ld leafCount;
    check L114() else D38();
  L136():
    x21 = ld x;
    check L138() else D48();
  L137():
    r91 = dyn base9[node, position, myNodeIndex, stack](<sym x>, <sym position>, <sym myNodeIndex>, <sym stack>);
    goto L20(r91);
  L199():
    n_h11 = force? n_h10;
    checkMissing(n_h11);
    r128 = `-`(n_h11, 1);
    r129 = seq_len(r128);
    goto L32(r129);
  L200():
    k1 = force? k;
    checkMissing(k1);
    r130 = `+`(<missing>, k1);
    l15 = ld merge;
    c25 = `is.object`(l15);
    if c25 then L201() else L202(r130, l15);
  D37():
    deopt 147 [r63];
  D38():
    deopt 149 [r65, l8, r62, leafCount2];
  D48():
    deopt 182 [x21];
  D53():
    deopt 197 [child8];
  L15(r70):
    l9 = ld ord;
    c12 = `is.object`(l9);
    if c12 then L119() else L120(r70, l9);
  L33(dx35):
    st merge = dx35;
    getOption = ldf getOption;
    check L206() else D76();
  L110():
    goto L13(r63);
  L113():
    dx12 = getTryDispatchBuiltinValue(dr12);
    goto L14(dx12);
  L114():
    leafCount3 = force? leafCount2;
    ___2 = ldf `[<-` in base;
    r68 = dyn ___2(l8, r62, leafCount3);
    goto L14(r68);
  L115():
    child4 = ld child;
    check L117() else D39();
  L116():
    r69 = dyn base7(<sym child>);
    goto L15(r69);
  L138():
    x22 = force? x21;
    checkMissing(x22);
    position6 = ld position;
    check L139() else D49();
  L143():
    child9 = force? child8;
    checkMissing(child9);
    st x = child9;
    st position = 0;
    goto L19();
  L201():
    dr34 = tryDispatchBuiltin.0("[<-", l15, r130);
    dc17 = getTryDispatchBuiltinDispatched(dr34);
    if dc17 then L203() else L202(r130, dr34);
  L202(r132, l17):
    t = ldf t;
    check L204() else D74();
  D39():
    deopt 155 [child4];
  D49():
    deopt 185 [position6];
  D74():
    deopt 295 [r132, l17, r130];
  D76():
    deopt 301 [];
  L16(dx15):
    st ord = dx15;
    ord = ld ord;
    check L123() else D42();
  L117():
    child5 = force? child4;
    checkMissing(child5);
    as_integer = ldf `as.integer` in base;
    r71 = dyn as_integer(child5);
    check L118() else D40();
  L119():
    dr14 = tryDispatchBuiltin.0("[<-", l9, r70);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L121() else L120(r70, dr14);
  L120(r73, l11):
    leafCount4 = ld leafCount;
    check L122() else D41();
  L139():
    position7 = force? position6;
    checkMissing(position7);
    myNodeIndex2 = ld myNodeIndex;
    check L140() else D50();
  L203():
    dx34 = getTryDispatchBuiltinValue(dr34);
    goto L33(dx34);
  L204():
    p16 = prom<V +>{
      myIdx = ld myIdx;
      myIdx1 = force? myIdx;
      checkMissing(myIdx1);
      c26 = `is.object`(myIdx1);
      if c26 then L2() else L3(myIdx1);
    L0(dx37):
      return dx37;
    L2():
      dr36 = tryDispatchBuiltin.1("[", myIdx1);
      dc18 = getTryDispatchBuiltinDispatched(dr36);
      if dc18 then L4() else L3(dr36);
    L3(myIdx3):
      ii4 = ld ii;
      ii5 = force? ii4;
      checkMissing(ii5);
      c27 = `is.object`(ii5);
      if c27 then L5() else L6(myIdx3, ii5);
    L1(dx39):
      __7 = ldf `[` in base;
      r136 = dyn __7(myIdx1, <missing>, dx39);
      goto L0(r136);
    L4():
      dx36 = getTryDispatchBuiltinValue(dr36);
      goto L0(dx36);
    L5():
      dr38 = tryDispatchBuiltin.1("[", ii5);
      dc19 = getTryDispatchBuiltinDispatched(dr38);
      if dc19 then L7() else L6(myIdx3, dr38);
    L6(myIdx5, ii7):
      k2 = ld k;
      k3 = force? k2;
      __6 = ldf `[` in base;
      r135 = dyn __6(ii7, k3);
      goto L1(r135);
    L7():
      dx38 = getTryDispatchBuiltinValue(dr38);
      goto L1(dx38);
    };
    r138 = dyn t(p16);
    check L205() else D75();
  L206():
    r140 = dyn getOption("as.hclust.dendr", FALSE);
    check L207() else D77();
  D40():
    deopt 158 [r71];
  D41():
    deopt 160 [r73, l11, r70, leafCount4];
  D42():
    deopt 164 [ord];
  D50():
    deopt 188 [myNodeIndex2];
  D75():
    deopt 297 [r132, l17, r130, r138];
  D77():
    deopt 304 [r140];
  L118():
    goto L15(r71);
  L121():
    dx14 = getTryDispatchBuiltinValue(dr14);
    goto L16(dx14);
  L122():
    leafCount5 = force? leafCount4;
    ___3 = ldf `[<-` in base;
    r76 = dyn ___3(l11, r70, leafCount5);
    goto L16(r76);
  L123():
    ord1 = force? ord;
    checkMissing(ord1);
    c13 = `is.object`(ord1);
    if c13 then L124() else L125(ord1);
  L140():
    myNodeIndex3 = force? myNodeIndex2;
    checkMissing(myNodeIndex3);
    stack8 = ld stack;
    check L141() else D51();
  L205():
    ___5 = ldf `[<-` in base;
    r139 = dyn ___5(l17, r130, r138);
    goto L33(r139);
  L207():
    c28 = `as.logical`(r140);
    if c28 then L208() else L34();
  D51():
    deopt 191 [stack8];
  L17(dx17):
    r78 = `-`(<missing>, dx17);
    l12 = ld merge;
    c14 = `is.object`(l12);
    if c14 then L128() else L129(r78, l12);
  L34():
    goto L38();
  L38():
    structure = ldf structure;
    check L220() else D85();
  L124():
    dr16 = tryDispatchBuiltin.1("[", ord1);
    dc8 = getTryDispatchBuiltinDispatched(dr16);
    if dc8 then L126() else L125(dr16);
  L125(ord3):
    leafCount6 = ld leafCount;
    check L127() else D43();
  L141():
    stack9 = force? stack8;
    checkMissing(stack9);
    list = ldf list in base;
    r93 = dyn list(x22, position7, myNodeIndex3, stack9);
    check L142() else D52();
  L208():
    sym14 = ldf seq_len;
    base14 = ldf seq_len in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L209() else L210();
  D43():
    deopt 166 [ord3, leafCount6];
  D52():
    deopt 195 [r93];
  D85():
    deopt 327 [];
  L18(r82, dx19):
    st merge = dx19;
    goto L19();
  L35(r142):
    s = toForSeq(r142);
    l18 = length(s);
    i = 0;
    goto L36(i);
  L126():
    dx16 = getTryDispatchBuiltinValue(dr16);
    goto L17(dx16);
  L127():
    leafCount7 = force? leafCount6;
    __2 = ldf `[` in base;
    r77 = dyn __2(ord3, leafCount7);
    goto L17(r77);
  L128():
    dr18 = tryDispatchBuiltin.0("[<-", l12, r78);
    dc9 = getTryDispatchBuiltinDispatched(dr18);
    if dc9 then L130() else L129(r78, dr18);
  L129(r80, l14):
    position4 = ld position;
    check L131() else D44();
  L142():
    goto L20(r93);
  L209():
    n_h12 = ld `n.h`;
    check L211() else D78();
  L210():
    r141 = dyn base14(<sym n.h>);
    goto L35(r141);
  L220():
    p22 = prom<V +>{
      sym15 = ldf list;
      base15 = ldf list in base;
      guard15 = `==`.4(sym15, base15);
      if guard15 then L3() else L4();
    L0(r156):
      return r156;
    L3():
      t1 = ldf t;
      p21 = prom<V +>{
        merge8 = ld merge;
        merge9 = force? merge8;
        checkMissing(merge9);
        c33 = `is.object`(merge9);
        if c33 then L1() else L2();
      L0(dx47):
        return dx47;
      L1():
        dr46 = tryDispatchBuiltin.1("[", merge9);
        dc23 = getTryDispatchBuiltinDispatched(dr46);
        if dc23 then L3() else L2();
      L2():
        ii16 = ld ii;
        ii17 = force? ii16;
        __11 = ldf `[` in base;
        r157 = dyn __11(merge9, <missing>, ii17);
        goto L0(r157);
      L3():
        dx46 = getTryDispatchBuiltinValue(dr46);
        goto L0(dx46);
      };
      r159 = dyn t1(p21);
      height2 = ld height;
      height3 = force? height2;
      checkMissing(height3);
      c34 = `is.object`(height3);
      if c34 then L5() else L6(height3);
    L4():
      r155 = dyn base15[merge, height, order, labels, call, method, `dist.method`](<lang t(`[`(merge, , ii))>, <lang `[`(height, ii)>, <sym ord>, <lang `[`(labsu, iOrd)>, <lang match.call()>, NA_STR, NA_STR);
      goto L0(r155);
    L1(dx49):
      ord10 = ld ord;
      ord11 = force? ord10;
      checkMissing(ord11);
      labsu = ld labsu;
      labsu1 = force? labsu;
      checkMissing(labsu1);
      c35 = `is.object`(labsu1);
      if c35 then L8() else L9(labsu1);
    L5():
      dr48 = tryDispatchBuiltin.1("[", height3);
      dc24 = getTryDispatchBuiltinDispatched(dr48);
      if dc24 then L7() else L6(dr48);
    L6(height5):
      ii18 = ld ii;
      ii19 = force? ii18;
      __12 = ldf `[` in base;
      r160 = dyn __12(height5, ii19);
      goto L1(r160);
    L2(dx51):
      match_call = ldf `match.call`;
      r162 = dyn match_call();
      list1 = ldf list in base;
      r163 = dyn list1(r159, dx49, ord11, dx51, r162, NA_STR, NA_STR);
      goto L0(r163);
    L7():
      dx48 = getTryDispatchBuiltinValue(dr48);
      goto L1(dx48);
    L8():
      dr50 = tryDispatchBuiltin.1("[", labsu1);
      dc25 = getTryDispatchBuiltinDispatched(dr50);
      if dc25 then L10() else L9(dr50);
    L9(labsu3):
      iOrd2 = ld iOrd;
      iOrd3 = force? iOrd2;
      __13 = ldf `[` in base;
      r161 = dyn __13(labsu3, iOrd3);
      goto L2(r161);
    L10():
      dx50 = getTryDispatchBuiltinValue(dr50);
      goto L2(dx50);
    };
    r165 = dyn structure[, class](p22, "hclust");
    check L221() else D86();
  D44():
    deopt 171 [r80, l14, r78, position4];
  D78():
    deopt 306 [n_h12];
  D86():
    deopt 331 [r165];
  L36(i1):
    i2 = `+`.1(i1, 1);
    c29 = `<`.1(l18, i2);
    if c29 then L212() else L37();
  L130():
    dx18 = getTryDispatchBuiltinValue(dr18);
    goto L18(r78, dx18);
  L131():
    position5 = force? position4;
    myNodeIndex = ld myNodeIndex;
    check L132() else D45();
  L211():
    n_h13 = force? n_h12;
    checkMissing(n_h13);
    r143 = seq_len(n_h13);
    goto L35(r143);
  L221():
    popenv;
    return r165;
  D45():
    deopt 172 [r80, l14, r78, position5, myNodeIndex];
  L37():
    x23 = `[[`(s, i2, NULL, TRUE);
    st k = x23;
    cat = ldf cat;
    check L213() else D79();
  L132():
    myNodeIndex1 = force? myNodeIndex;
    ___4 = ldf `[<-` in base;
    r83 = dyn ___4(l14, r78, position5, myNodeIndex1);
    goto L18(r80, r83);
  L212():
    goto L38();
  D79():
    deopt 310 [i2];
  L213():
    p19 = prom<V +>{
      sprintf = ldf sprintf;
      p17 = prom<V +>{
        k4 = ld k;
        k5 = force? k4;
        checkMissing(k5);
        return k5;
      };
      p18 = prom<V +>{
        ii8 = ld ii;
        ii9 = force? ii8;
        checkMissing(ii9);
        c30 = `is.object`(ii9);
        if c30 then L1() else L2(ii9);
      L0(dx41):
        return dx41;
      L1():
        dr40 = tryDispatchBuiltin.1("[", ii9);
        dc20 = getTryDispatchBuiltinDispatched(dr40);
        if dc20 then L3() else L2(dr40);
      L2(ii11):
        k6 = ld k;
        k7 = force? k6;
        __8 = ldf `[` in base;
        r145 = dyn __8(ii11, k7);
        goto L0(r145);
      L3():
        dx40 = getTryDispatchBuiltinValue(dr40);
        goto L0(dx40);
      };
      r147 = dyn sprintf("ii[k=%2d]=%2d ", p17, p18);
      return r147;
    };
    r149 = dyn cat(p19);
    check L214() else D80();
  D80():
    deopt 312 [i2, r149];
  L214():
    cat1 = ldf cat;
    check L215() else D81();
  D81():
    deopt 314 [i2];
  L215():
    r150 = dyn cat1("-> s=merge[[,ii[k]]]=");
    check L216() else D82();
  D82():
    deopt 316 [i2, r150];
  L216():
    str = ldf str;
    check L217() else D83();
  D83():
    deopt 318 [i2];
  L217():
    p20 = prom<V +>{
      merge = ld merge;
      merge1 = force? merge;
      checkMissing(merge1);
      c31 = `is.object`(merge1);
      if c31 then L2() else L3(merge1);
    L0(dx43):
      return dx43;
    L2():
      dr42 = tryDispatchBuiltin.1("[", merge1);
      dc21 = getTryDispatchBuiltinDispatched(dr42);
      if dc21 then L4() else L3(dr42);
    L3(merge3):
      ii12 = ld ii;
      ii13 = force? ii12;
      checkMissing(ii13);
      c32 = `is.object`(ii13);
      if c32 then L5() else L6(merge3, ii13);
    L1(dx45):
      __10 = ldf `[` in base;
      r152 = dyn __10(merge1, <missing>, dx45);
      goto L0(r152);
    L4():
      dx42 = getTryDispatchBuiltinValue(dr42);
      goto L0(dx42);
    L5():
      dr44 = tryDispatchBuiltin.1("[", ii13);
      dc22 = getTryDispatchBuiltinDispatched(dr44);
      if dc22 then L7() else L6(merge3, dr44);
    L6(merge5, ii15):
      k8 = ld k;
      k9 = force? k8;
      __9 = ldf `[` in base;
      r151 = dyn __9(ii15, k9);
      goto L1(r151);
    L7():
      dx44 = getTryDispatchBuiltinValue(dr44);
      goto L1(dx44);
    };
    r154 = dyn str(p20);
    check L218() else D84();
  D84():
    deopt 320 [i2, r154];
  L218():
    goto L36(i2);
  }
}