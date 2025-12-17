fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner4292945623;
    st macDynLoads = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner4292945623(filename, arch, info) {
  (reg filename:*, reg arch:*, reg info:*) -+> V { var filename:*, var arch:*, var info:*, reg info_isMissing:L, reg info_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg c:cls, reg r2:V, reg p:p(V +), reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg r5:V, reg filename1:*, reg filename2:V, reg inherits:cls, reg r6:V, reg c1:L, reg isSeekable:cls, reg f:*, reg f1:V, reg p1:p(V +), reg r8:V, reg r9:V, reg c2:L, reg stop:cls, reg r10:V, reg filename3:*, reg filename4:V, reg file:cls, reg path_expand:cls, reg filename6:*, reg filename7:V, reg p2:p(V +), reg r13:V, reg p3:p(V +), reg r15:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r16:V, reg on_exit:cls, reg r17:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r18:V, reg r19:V, reg missing:cls, reg r20:V, reg c3:L, reg sym4:cls, reg base4:cls, reg guard4:L, reg r22:V, reg r23:V, reg info1:*, reg info2:V, reg c4:L, reg c5:L, reg isTRUE:cls, reg info3:*, reg info4:V, reg p4:p(V +), reg r25:V, reg c6:L, reg r26:S, reg match_arg:cls, reg info5:*, reg info6:V, reg p5:p(V +), reg r29:V, reg readBin:cls, reg f2:*, reg f3:V, reg p6:p(V +), reg r31:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r32:V, reg r33:V, reg c7:cls, reg r34:V, reg r35:cls, reg r36:cls, reg magic:*, reg magic1:V, reg magic_fat:*, reg magic_fat1:V, reg r37:V, reg c8:L, reg readBin1:cls, reg f4:*, reg f5:V, reg p7:p(V +), reg r39:V, reg n_archs:*, reg n_archs1:V, reg r40:V, reg c9:L, reg sym6:cls, reg base6:cls, reg guard6:L, reg r41:V, reg r42:V, reg list:cls, reg r43:V, reg replicate:cls, reg n_archs2:*, reg n_archs3:V, reg p8:p(V +), reg i2r:cls, reg readBin2:cls, reg f6:*, reg f7:V, reg p9:p(V +), reg r48:V, reg p10:p(V +), reg r50:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r51:V, reg r52:V, reg cpu2name:cls, reg ai:*, reg ai1:V, reg c10:L, reg ai3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r53:V, reg p11:p(V +), reg r55:V, reg ai4:*, reg ai5:V, reg c11:L, reg ai7:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg __1:cls, reg r56:V, reg ai8:*, reg ai9:V, reg c12:L, reg ai11:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg __2:cls, reg r57:V, reg ai12:*, reg ai13:V, reg c13:L, reg ai15:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg __3:cls, reg r58:V, reg list1:cls, reg r59:V, reg p12:p(V +), reg r61:V, reg sapply:cls, reg archs:*, reg archs1:V, reg p13:p(V +), reg r63:cls, reg p14:p(V +), reg r65:V, reg l:*, reg names__:cls, reg r66:V, reg info7:*, reg info8:V, reg r67:V, reg c14:L, reg archs2:*, reg archs3:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r70:V, reg r71:V, reg arch1:*, reg arch2:V, reg c15:V, reg c16:L, reg archs4:*, reg archs5:V, reg c17:L, reg archs7:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg R_Version:cls, reg r72:V, reg c18:L, reg archs9:V, reg r74:V, reg dr10:V, reg dc5:L, reg dx10:V, reg archs11:V, reg dx11:V, reg r75:V, reg __4:cls, reg r76:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r77:V, reg r78:V, reg r_arch:*, reg r_arch1:V, reg c19:V, reg c20:L, reg archs12:*, reg archs13:V, reg c21:L, reg archs15:V, reg dr12:V, reg dc6:L, reg dx12:V, reg dx13:V, reg __5:cls, reg r79:V, reg dx14:V, reg archs16:*, reg archs17:V, reg c22:L, reg archs19:V, reg dr14:V, reg dc7:L, reg dx16:V, reg dx17:V, reg arch3:*, reg arch4:V, reg __6:cls, reg r80:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r81:V, reg r82:V, reg r_arch2:*, reg r_arch3:V, reg c23:V, reg c24:L, reg seek:cls, reg f8:*, reg f9:V, reg p15:p(V +), reg r_arch4:*, reg r_arch5:V, reg c25:L, reg r_arch7:V, reg dr16:V, reg dc8:L, reg dx18:V, reg dx19:V, reg r86:V, reg p16:p(V +), reg r88:V, reg readBin3:cls, reg f10:*, reg f11:V, reg p17:p(V +), reg r90:V, reg info9:*, reg info10:V, reg r92:V, reg c26:L, reg magic2:*, reg magic3:V, reg magic_mh:*, reg magic_mh1:V, reg r94:V, reg c27:L, reg c28:V, reg magic4:*, reg magic5:V, reg magic_hm:*, reg magic_hm1:V, reg r95:V, reg c30:L, reg c31:V, reg c33:L, reg c34:V, reg magic6:*, reg magic7:V, reg magic_mh64:*, reg magic_mh65:V, reg r96:V, reg c36:L, reg c37:V, reg c39:L, reg c40:V, reg magic8:*, reg magic9:V, reg magic_hm64:*, reg magic_hm65:V, reg r97:V, reg c42:L, reg c43:V, reg c45:L, reg magic10:*, reg magic11:V, reg magic_mh66:*, reg magic_mh67:V, reg r98:V, reg c46:L, reg c47:V, reg magic12:*, reg magic13:V, reg magic_mh68:*, reg magic_mh69:V, reg r99:V, reg c49:L, reg c50:V, reg c52:L, reg r100:S, reg magic14:*, reg magic15:V, reg magic_mh70:*, reg magic_mh71:V, reg r101:V, reg c53:L, reg c54:V, reg magic16:*, reg magic17:V, reg magic_hm66:*, reg magic_hm67:V, reg r102:V, reg c56:L, reg c57:V, reg c59:L, reg r103:I, reg i2r1:cls, reg readBin4:cls, reg f12:*, reg f13:V, reg p18:p(V +), reg abi:*, reg abi1:V, reg r105:V, reg c60:L, reg r108:I, reg r109:I, reg r110:V, reg p19:p(V +), reg end:*, reg end1:V, reg p20:p(V +), reg r113:V, reg p21:p(V +), reg r115:V, reg info11:*, reg info12:V, reg r116:V, reg c61:L, reg sym11:cls, reg base11:cls, reg guard11:L, reg r117:V, reg r118:V, reg cpu2name1:cls, reg mh:*, reg mh1:V, reg c62:L, reg mh3:V, reg dr18:V, reg dc9:L, reg dx20:V, reg dx21:V, reg __7:cls, reg r119:V, reg p22:p(V +), reg r121:V, reg mh4:*, reg mh5:V, reg c63:L, reg mh7:V, reg dr20:V, reg dc10:L, reg dx22:V, reg dx23:V, reg __8:cls, reg r122:V, reg mh8:*, reg mh9:V, reg c64:L, reg mh11:V, reg dr22:V, reg dc11:L, reg dx24:V, reg dx25:V, reg __9:cls, reg r123:V, reg end2:*, reg end3:V, reg abi2:*, reg abi3:V, reg list2:cls, reg r124:V, reg unlist:cls, reg replicate1:cls, reg mh12:*, reg mh13:V, reg c65:L, reg mh15:V, reg dr24:V, reg dc12:L, reg dx26:V, reg dx27:V, reg __10:cls, reg r127:V, reg p23:p(V +), reg i2r2:cls, reg readBin5:cls, reg f14:*, reg f15:V, reg p24:p(V +), reg end4:*, reg end5:V, reg p25:p(V +), reg r131:V, reg p26:p(V +), reg r133:V, reg lc:*, reg lc1:V, reg c66:L, reg lc3:V, reg dr26:V, reg dc13:L, reg dx28:V, reg dx29:V, reg __11:cls, reg r134:V, reg LC_LOAD_DYLIB:*, reg LC_LOAD_DYLIB1:V, reg r135:V, reg c67:L, reg c69:V, reg info13:*, reg info14:V, reg r136:V, reg c70:L, reg c71:V, reg c73:L, reg c75:V, reg lc4:*, reg lc5:V, reg c76:L, reg c78:L, reg lc7:V, reg dr28:V, reg dc14:L, reg dx30:V, reg c80:L, reg dx31:V, reg __12:cls, reg r137:V, reg r138:V, reg c81:L, reg c82:V, reg c84:L, reg c85:V, reg lc8:*, reg lc9:V, reg c87:L, reg c89:L, reg lc11:V, reg dr30:V, reg dc15:L, reg dx32:V, reg c91:L, reg dx33:V, reg __13:cls, reg r139:V, reg LC_ID_DYLIB:*, reg LC_ID_DYLIB1:V, reg r140:V, reg c92:L, reg c95:L, reg c96:V, reg info15:*, reg info16:V, reg r141:V, reg c97:L, reg c98:V, reg c101:L, reg c104:L, reg c105:V, reg lc12:*, reg lc13:V, reg c106:L, reg c109:L, reg c110:L, reg lc15:V, reg dr32:V, reg dc16:L, reg dx34:V, reg c113:L, reg c114:L, reg dx35:V, reg __14:cls, reg r142:V, reg r143:V, reg c115:L, reg c116:V, reg c119:L, reg c120:V, reg c122:L, reg c123:V, reg lc16:*, reg lc17:V, reg c125:L, reg c127:L, reg lc19:V, reg dr34:V, reg dc17:L, reg dx36:V, reg c129:L, reg dx37:V, reg __15:cls, reg r144:V, reg LC_RPATH:*, reg LC_RPATH1:V, reg r145:V, reg c130:L, reg c133:L, reg c134:V, reg info17:*, reg info18:V, reg r146:V, reg c135:L, reg c136:V, reg c139:L, reg c142:L, reg c143:V, reg lc20:*, reg lc21:V, reg c144:L, reg c147:L, reg c148:L, reg lc23:V, reg dr36:V, reg dc18:L, reg dx38:V, reg c151:L, reg c152:L, reg dx39:V, reg __16:cls, reg r147:V, reg r148:V, reg c153:L, reg c154:V, reg c157:L, reg c158:V, reg c160:L, reg lc24:*, reg lc25:V, reg c161:L, reg lc27:V, reg dr38:V, reg dc19:L, reg dx40:V, reg dx41:V, reg __17:cls, reg r149:V, reg LC_RPATH2:*, reg LC_RPATH3:V, reg r150:V, reg c162:L, reg r151:I, reg i2r3:cls, reg readBin6:cls, reg f16:*, reg f17:V, reg p27:p(V +), reg nent:*, reg nent1:V, reg p28:p(V +), reg end6:*, reg end7:V, reg p29:p(V +), reg r155:V, reg p30:p(V +), reg r157:V, reg readBin7:cls, reg f18:*, reg f19:V, reg p31:p(V +), reg raw:cls, reg r159:V, reg p32:p(V +), reg lc28:*, reg lc29:V, reg c163:L, reg lc31:V, reg dr40:V, reg dc20:L, reg dx42:V, reg dx43:V, reg __18:cls, reg r161:V, reg nent2:*, reg nent3:V, reg r162:V, reg r163:V, reg r164:V, reg p33:p(V +), reg r166:V, reg ld:*, reg ld1:V, reg c164:L, reg ld3:V, reg dr42:V, reg dc21:L, reg dx44:V, reg dx45:V, reg __19:cls, reg r167:V, reg nent4:*, reg nent5:V, reg r168:V, reg r169:V, reg r170:V, reg o:*, reg o1:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r171:V, reg o4:V, reg r172:V, reg r173:*, reg r174:V, reg length:cls, reg r175:V, reg r176:V, reg c165:L, reg c167:V, reg o5:*, reg o6:V, reg r177:V, reg c168:L, reg c169:V, reg c171:L, reg r178:*, reg r179:V, reg c172:L, reg r181:V, reg dr44:V, reg dc22:L, reg dx46:V, reg dx47:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r184:V, reg r185:V, reg r186:V, reg o7:*, reg o8:V, reg r187:V, reg sym14:cls, reg base14:cls, reg guard14:L, reg r190:V, reg r191:V, reg r192:V, reg r193:*, reg r194:V, reg length1:cls, reg r195:V, reg seq_int:cls, reg r196:V, reg __20:cls, reg r197:V, reg sym15:cls, reg base15:cls, reg guard15:L, reg r198:V, reg r199:V, reg r200:*, reg r201:V, reg r202:V, reg any:cls, reg r203:V, reg c173:L, reg r204:*, reg r205:V, reg c174:L, reg r207:V, reg dr46:V, reg dc23:L, reg dx49:V, reg dx50:V, reg which:cls, reg r208:*, reg r209:V, reg r210:V, reg p34:p(V +), reg r212:V, reg c175:L, reg r216:V, reg r217:R, reg r218:V, reg dr48:V, reg dc24:L, reg dx51:V, reg r221:V, reg r222:R, reg dx52:V, reg __21:cls, reg r223:V, reg r224:V, reg r225:V, reg __22:cls, reg r226:V, reg rawToChar:cls, reg r227:*, reg r228:V, reg p35:p(V +), reg r230:V, reg seek1:cls, reg f20:*, reg f21:V, reg p36:p(V +), reg lc32:*, reg lc33:V, reg c176:L, reg lc35:V, reg dr50:V, reg dc25:L, reg dx54:V, reg dx55:V, reg __23:cls, reg r232:V, reg r233:V, reg p37:p(V +), reg p38:p(V +), reg r237:V, reg p39:p(V +), reg r239:V |
    mkenv;
    st filename = filename;
    st arch = arch;
    info_isMissing = missing.0(info);
    if info_isMissing then L0() else L1(info);
  L0():
    p = prom<V +>{
      sym = ldf c;
      base = ldf c in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r1):
      return r1;
    L1():
      c = ldf c in base;
      r2 = dyn c("loads", "id", "rpaths", "fat", "head");
      goto L0(r2);
    L2():
      r = dyn base("loads", "id", "rpaths", "fat", "head");
      goto L0(r);
    };
    goto L1(p);
  L1(info_orDefault):
    st info = info_orDefault;
    sym1 = ldf inherits;
    base1 = ldf inherits in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L51() else L52();
  L2(r5):
    c1 = `as.logical`(r5);
    if c1 then L55() else L3();
  L51():
    filename1 = ld filename;
    check L53() else D0();
  L52():
    r4 = dyn base1(<sym filename>, "connection");
    goto L2(r4);
  D0():
    deopt 2 [filename1];
  L3():
    file = ldf file;
    check L64() else D7();
  L6():
    sym3 = ldf missing;
    base3 = ldf missing in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L68() else L69();
  L53():
    filename2 = force? filename1;
    checkMissing(filename2);
    inherits = ldf inherits in base;
    r6 = dyn inherits(filename2, "connection", FALSE);
    check L54() else D1();
  L55():
    isSeekable = ldf isSeekable;
    check L56() else D2();
  D1():
    deopt 7 [r6];
  D2():
    deopt 9 [];
  D7():
    deopt 23 [];
  L7(r19):
    c3 = `as.logical`(r19);
    if c3 then L70() else L8();
  L54():
    goto L2(r6);
  L56():
    p1 = prom<V +>{
      f = ld f;
      f1 = force? f;
      checkMissing(f1);
      return f1;
    };
    r8 = dyn isSeekable(p1);
    check L57() else D3();
  L64():
    p3 = prom<V +>{
      path_expand = ldf `path.expand`;
      p2 = prom<V +>{
        filename6 = ld filename;
        filename7 = force? filename6;
        checkMissing(filename7);
        return filename7;
      };
      r13 = dyn path_expand(p2);
      return r13;
    };
    r15 = dyn file(p3, "rb");
    check L65() else D8();
  L68():
    missing = ldf missing in base;
    r20 = dyn missing(<sym arch>);
    goto L7(r20);
  L69():
    r18 = dyn base3(<sym arch>);
    goto L7(r18);
  D3():
    deopt 11 [r8];
  D8():
    deopt 26 [r15];
  L8():
    goto L9();
  L9():
    sym4 = ldf `is.logical`;
    base4 = ldf `is.logical` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L72() else L73();
  L57():
    r9 = `!`(r8);
    c2 = `as.logical`(r9);
    if c2 then L58() else L4();
  L65():
    st f = r15;
    sym2 = ldf `on.exit`;
    base2 = ldf `on.exit` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L66() else L67();
  L70():
    st arch = NULL;
    goto L9();
  L4():
    goto L5();
  L5():
    filename3 = ld filename;
    check L62() else D6();
  L10(r23):
    c5 = `as.logical`(r23);
    if c5 then L75() else L11();
  L58():
    stop = ldf stop;
    check L59() else D4();
  L66():
    on_exit = ldf `on.exit` in base;
    r17 = dyn on_exit(<lang close(f)>);
    goto L6();
  L67():
    r16 = dyn base2(<lang close(f)>);
    goto L6();
  L72():
    info1 = ld info;
    check L74() else D9();
  L73():
    r22 = dyn base4(<sym info>);
    goto L10(r22);
  D4():
    deopt 14 [];
  D6():
    deopt 19 [filename3];
  D9():
    deopt 40 [info1];
  L11():
    goto L14();
  L14():
    match_arg = ldf `match.arg`;
    check L81() else D12();
  L59():
    r10 = dyn stop("Source must be a seekable connection");
    check L60() else D5();
  L62():
    filename4 = force? filename3;
    checkMissing(filename4);
    st f = filename4;
    goto L6();
  L74():
    info2 = force? info1;
    checkMissing(info2);
    c4 = `is.logical`(info2);
    goto L10(c4);
  L75():
    isTRUE = ldf isTRUE;
    check L76() else D10();
  D5():
    deopt 16 [r10];
  D10():
    deopt 44 [];
  D12():
    deopt 55 [];
  L60():
    goto L5();
  L76():
    p4 = prom<V +>{
      info3 = ld info;
      info4 = force? info3;
      checkMissing(info4);
      return info4;
    };
    r25 = dyn isTRUE(p4);
    check L77() else D11();
  L81():
    p5 = prom<V +>{
      info5 = ld info;
      info6 = force? info5;
      checkMissing(info6);
      return info6;
    };
    r29 = dyn match_arg(p5);
    check L82() else D13();
  D11():
    deopt 46 [r25];
  D13():
    deopt 57 [r29];
  L77():
    c6 = `as.logical`(r25);
    if c6 then L78() else L12();
  L82():
    st info = r29;
    readBin = ldf readBin;
    check L83() else D14();
  D14():
    deopt 60 [];
  L12():
    goto L13("loads");
  L13(r26):
    st info = r26;
    goto L14();
  L78():
    goto L13("head");
  L83():
    p6 = prom<V +>{
      f2 = ld f;
      f3 = force? f2;
      checkMissing(f3);
      return f3;
    };
    r31 = dyn readBin[, , , endian](p6, 1, 1, "big");
    check L84() else D15();
  D15():
    deopt 66 [r31];
  L84():
    st magic = r31;
    st `magic.fat` = -889275714;
    st `magic.mh` = -17958194;
    st `magic.hm` = -822415874;
    st `magic.mh64` = -17958193;
    st `magic.hm64` = -805638658;
    sym5 = ldf c;
    base5 = ldf c in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L85() else L86();
  L15(r33):
    st `cpu.types` = r33;
    st LC_LOAD_DYLIB = 12;
    st LC_ID_DYLIB = 13;
    st LC_RPATH = 2.147483676E9;
    r35 = clos inner3002224933;
    st i2r = r35;
    r36 = clos inner2205765457;
    st cpu2name = r36;
    magic = ld magic;
    check L88() else D17();
  L85():
    c7 = ldf c in base;
    r34 = dyn c7(1, 7, 16777223, 12, 16777228, 33554444, 14, 18, 1.6777234E7);
    check L87() else D16();
  L86():
    r32 = dyn base5[vax, i386, x86_64, arm, arm64, `arm64-32`, sparc, ppc, ppc64](1, 7, 16777223, 12, 16777228, 33554444, 14, 18, 1.6777234E7);
    goto L15(r32);
  D16():
    deopt 104 [r34];
  D17():
    deopt 121 [magic];
  L87():
    goto L15(r34);
  L88():
    magic1 = force? magic;
    checkMissing(magic1);
    magic_fat = ld `magic.fat`;
    check L89() else D18();
  D18():
    deopt 122 [magic1, magic_fat];
  L89():
    magic_fat1 = force? magic_fat;
    checkMissing(magic_fat1);
    r37 = `==`(magic1, magic_fat1);
    c8 = `as.logical`(r37);
    if c8 then L90() else L16();
  L16():
    info9 = ld info;
    check L151() else D44();
  L34():
    magic2 = ld magic;
    check L155() else D45();
  L90():
    readBin1 = ldf readBin;
    check L91() else D19();
  D19():
    deopt 126 [];
  D44():
    deopt 226 [info9];
  D45():
    deopt 235 [magic2];
  L91():
    p7 = prom<V +>{
      f4 = ld f;
      f5 = force? f4;
      checkMissing(f5);
      return f5;
    };
    r39 = dyn readBin1[, , , endian](p7, 1, 1, "big");
    check L92() else D20();
  L151():
    info10 = force? info9;
    checkMissing(info10);
    r92 = `==`(info10, "fat");
    c26 = `as.logical`(r92);
    if c26 then L152() else L35();
  L155():
    magic3 = force? magic2;
    checkMissing(magic3);
    magic_mh = ld `magic.mh`;
    check L156() else D46();
  D20():
    deopt 132 [r39];
  D46():
    deopt 236 [magic3, magic_mh];
  L35():
    goto L34();
  L92():
    st `n.archs` = r39;
    n_archs = ld `n.archs`;
    check L93() else D21();
  L152():
    popenv;
    return NULL;
  L156():
    magic_mh1 = force? magic_mh;
    checkMissing(magic_mh1);
    r94 = `==`(magic3, magic_mh1);
    c27 = `as.logical`(r94);
    if c27 then L36(c27) else L157();
  D21():
    deopt 134 [n_archs];
  L36(c28):
    c33 = `as.logical`(c28);
    if c33 then L37(c33) else L161();
  L93():
    n_archs1 = force? n_archs;
    checkMissing(n_archs1);
    r40 = `<`(n_archs1, 0.0);
    c9 = `as.logical`(r40);
    if c9 then L94() else L17();
  L157():
    magic4 = ld magic;
    check L158() else D47();
  D47():
    deopt 239 [c27, magic4];
  L17():
    replicate = ldf replicate;
    check L100() else D23();
  L37(c34):
    c39 = `as.logical`(c34);
    if c39 then L38(c39) else L165();
  L94():
    sym6 = ldf list;
    base6 = ldf list in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L95() else L96();
  L158():
    magic5 = force? magic4;
    checkMissing(magic5);
    magic_hm = ld `magic.hm`;
    check L159() else D48();
  L161():
    magic6 = ld magic;
    check L162() else D49();
  D23():
    deopt 146 [];
  D48():
    deopt 240 [c27, magic5, magic_hm];
  D49():
    deopt 244 [c33, magic6];
  L18(r42):
    popenv;
    return r42;
  L38(c40):
    c45 = `as.logical`(c40);
    if c45 then L169() else L39();
  L95():
    list = ldf list in base;
    r43 = dyn list();
    check L97() else D22();
  L96():
    r41 = dyn base6();
    goto L18(r41);
  L100():
    p8 = prom<V +>{
      n_archs2 = ld `n.archs`;
      n_archs3 = force? n_archs2;
      checkMissing(n_archs3);
      return n_archs3;
    };
    p12 = prom<V +>{
      i2r = ldf i2r;
      p10 = prom<V +>{
        readBin2 = ldf readBin;
        p9 = prom<V +>{
          f6 = ld f;
          f7 = force? f6;
          checkMissing(f7);
          return f7;
        };
        r48 = dyn readBin2[, , , endian](p9, 1, 5, "big");
        return r48;
      };
      r50 = dyn i2r(p10);
      st ai = r50;
      sym7 = ldf list;
      base7 = ldf list in base;
      guard7 = `==`.4(sym7, base7);
      if guard7 then L4() else L5();
    L0(r52):
      return r52;
    L4():
      cpu2name = ldf cpu2name;
      p11 = prom<V +>{
        ai = ld ai;
        ai1 = force? ai;
        checkMissing(ai1);
        c10 = `is.object`(ai1);
        if c10 then L1() else L2(ai1);
      L0(dx1):
        return dx1;
      L1():
        dr = tryDispatchBuiltin.1("[", ai1);
        dc = getTryDispatchBuiltinDispatched(dr);
        if dc then L3() else L2(dr);
      L2(ai3):
        __ = ldf `[` in base;
        r53 = dyn __(ai3, 1);
        goto L0(r53);
      L3():
        dx = getTryDispatchBuiltinValue(dr);
        goto L0(dx);
      };
      r55 = dyn cpu2name(p11);
      ai4 = ld ai;
      ai5 = force? ai4;
      checkMissing(ai5);
      c11 = `is.object`(ai5);
      if c11 then L6() else L7(ai5);
    L5():
      r51 = dyn base7[cpu, type, offset, size](<lang cpu2name(`[`(ai, 1))>, <lang `[`(ai, `:`(1.0, 2.0))>, <lang `[`(ai, 3)>, <lang `[`(ai, 4)>);
      goto L0(r51);
    L1(dx3):
      ai8 = ld ai;
      ai9 = force? ai8;
      checkMissing(ai9);
      c12 = `is.object`(ai9);
      if c12 then L9() else L10(ai9);
    L6():
      dr2 = tryDispatchBuiltin.1("[", ai5);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L8() else L7(dr2);
    L7(ai7):
      __1 = ldf `[` in base;
      r56 = dyn __1(ai7, <int 1, 2>);
      goto L1(r56);
    L2(dx5):
      ai12 = ld ai;
      ai13 = force? ai12;
      checkMissing(ai13);
      c13 = `is.object`(ai13);
      if c13 then L12() else L13(ai13);
    L8():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L1(dx2);
    L9():
      dr4 = tryDispatchBuiltin.1("[", ai9);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L11() else L10(dr4);
    L10(ai11):
      __2 = ldf `[` in base;
      r57 = dyn __2(ai11, 3);
      goto L2(r57);
    L3(dx7):
      list1 = ldf list in base;
      r59 = dyn list1(r55, dx3, dx5, dx7);
      goto L0(r59);
    L11():
      dx4 = getTryDispatchBuiltinValue(dr4);
      goto L2(dx4);
    L12():
      dr6 = tryDispatchBuiltin.1("[", ai13);
      dc3 = getTryDispatchBuiltinDispatched(dr6);
      if dc3 then L14() else L13(dr6);
    L13(ai15):
      __3 = ldf `[` in base;
      r58 = dyn __3(ai15, 4);
      goto L3(r58);
    L14():
      dx6 = getTryDispatchBuiltinValue(dr6);
      goto L3(dx6);
    };
    r61 = dyn replicate(p8, p12, FALSE);
    check L101() else D24();
  L159():
    magic_hm1 = force? magic_hm;
    checkMissing(magic_hm1);
    r95 = `==`(magic5, magic_hm1);
    c30 = `as.logical`(r95);
    c31 = `||`(c27, c30);
    goto L36(c31);
  L162():
    magic7 = force? magic6;
    checkMissing(magic7);
    magic_mh64 = ld `magic.mh64`;
    check L163() else D50();
  L165():
    magic8 = ld magic;
    check L166() else D51();
  D22():
    deopt 141 [r43];
  D24():
    deopt 150 [r61];
  D50():
    deopt 245 [c33, magic7, magic_mh64];
  D51():
    deopt 249 [c39, magic8];
  L39():
    invisible.0();
    popenv;
    return NULL;
  L97():
    goto L18(r43);
  L101():
    st archs = r61;
    sapply = ldf sapply;
    check L102() else D25();
  L163():
    magic_mh65 = force? magic_mh64;
    checkMissing(magic_mh65);
    r96 = `==`(magic7, magic_mh65);
    c36 = `as.logical`(r96);
    c37 = `||`(c33, c36);
    goto L37(c37);
  L166():
    magic9 = force? magic8;
    checkMissing(magic9);
    magic_hm64 = ld `magic.hm64`;
    check L167() else D52();
  L169():
    magic10 = ld magic;
    check L170() else D53();
  D25():
    deopt 153 [];
  D52():
    deopt 250 [c39, magic9, magic_hm64];
  D53():
    deopt 254 [magic10];
  L102():
    p13 = prom<V +>{
      archs = ld archs;
      archs1 = force? archs;
      checkMissing(archs1);
      return archs1;
    };
    p14 = prom<V +>{
      r63 = clos inner1942959787;
      return r63;
    };
    r65 = dyn sapply(p13, p14);
    check L103() else D26();
  L167():
    magic_hm65 = force? magic_hm64;
    checkMissing(magic_hm65);
    r97 = `==`(magic9, magic_hm65);
    c42 = `as.logical`(r97);
    c43 = `||`(c39, c42);
    goto L38(c43);
  L170():
    magic11 = force? magic10;
    checkMissing(magic11);
    magic_mh66 = ld `magic.mh`;
    check L171() else D54();
  D26():
    deopt 156 [r65];
  D54():
    deopt 255 [magic11, magic_mh66];
  L103():
    l = ld archs;
    names__ = ldf `names<-`;
    check L104() else D27();
  L171():
    magic_mh67 = force? magic_mh66;
    checkMissing(magic_mh67);
    r98 = `==`(magic11, magic_mh67);
    c46 = `as.logical`(r98);
    if c46 then L40(c46) else L172();
  D27():
    deopt 158 [r65, l, r65];
  L40(c47):
    c52 = `as.logical`(c47);
    if c52 then L176() else L41();
  L104():
    r66 = dyn names__(l, NULL, r65);
    check L105() else D28();
  L172():
    magic12 = ld magic;
    check L173() else D55();
  D28():
    deopt 160 [r65, r66];
  D55():
    deopt 258 [c46, magic12];
  L41():
    goto L42("little");
  L42(r100):
    st end = r100;
    magic14 = ld magic;
    check L178() else D57();
  L105():
    st archs = r66;
    info7 = ld info;
    check L106() else D29();
  L173():
    magic13 = force? magic12;
    checkMissing(magic13);
    magic_mh68 = ld `magic.mh64`;
    check L174() else D56();
  L176():
    goto L42("big");
  D29():
    deopt 162 [info7];
  D56():
    deopt 259 [c46, magic13, magic_mh68];
  D57():
    deopt 268 [magic14];
  L106():
    info8 = force? info7;
    checkMissing(info8);
    r67 = `==`(info8, "fat");
    c14 = `as.logical`(r67);
    if c14 then L107() else L20();
  L174():
    magic_mh69 = force? magic_mh68;
    checkMissing(magic_mh69);
    r99 = `==`(magic13, magic_mh69);
    c49 = `as.logical`(r99);
    c50 = `||`(c46, c49);
    goto L40(c50);
  L178():
    magic15 = force? magic14;
    checkMissing(magic15);
    magic_mh70 = ld `magic.mh`;
    check L179() else D58();
  D58():
    deopt 269 [magic15, magic_mh70];
  L20():
    sym8 = ldf `is.null`;
    base8 = ldf `is.null` in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L111() else L112();
  L107():
    archs2 = ld archs;
    check L108() else D30();
  L179():
    magic_mh71 = force? magic_mh70;
    checkMissing(magic_mh71);
    r101 = `==`(magic15, magic_mh71);
    c53 = `as.logical`(r101);
    if c53 then L43(c53) else L180();
  D30():
    deopt 166 [archs2];
  L22(r71):
    c16 = `as.logical`(r71);
    if c16 then L114() else L23();
  L43(c54):
    c59 = `as.logical`(c54);
    if c59 then L184() else L44();
  L108():
    archs3 = force? archs2;
    checkMissing(archs3);
    popenv;
    return archs3;
  L111():
    arch1 = ld arch;
    check L113() else D31();
  L112():
    r70 = dyn base8(<sym arch>);
    goto L22(r70);
  L180():
    magic16 = ld magic;
    check L181() else D59();
  D31():
    deopt 172 [arch1];
  D59():
    deopt 272 [c53, magic16];
  L23():
    archs16 = ld archs;
    check L135() else D37();
  L29():
    sym10 = ldf `is.null`;
    base10 = ldf `is.null` in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L140() else L141();
  L44():
    goto L45(64);
  L45(r103):
    st abi = r103;
    i2r1 = ldf i2r;
    check L186() else D61();
  L113():
    arch2 = force? arch1;
    checkMissing(arch2);
    c15 = `==`(arch2, NULL);
    goto L22(c15);
  L114():
    archs4 = ld archs;
    check L115() else D32();
  L181():
    magic17 = force? magic16;
    checkMissing(magic17);
    magic_hm66 = ld `magic.hm`;
    check L182() else D60();
  L184():
    goto L45(32);
  D32():
    deopt 175 [archs4];
  D37():
    deopt 195 [archs16];
  D60():
    deopt 273 [c53, magic17, magic_hm66];
  D61():
    deopt 283 [];
  L31(r82):
    c24 = `as.logical`(r82);
    if c24 then L143() else L32();
  L115():
    archs5 = force? archs4;
    checkMissing(archs5);
    c17 = `is.object`(archs5);
    if c17 then L116() else L117(archs5);
  L135():
    archs17 = force? archs16;
    checkMissing(archs17);
    c22 = `is.object`(archs17);
    if c22 then L136() else L137(archs17);
  L140():
    r_arch2 = ld `r.arch`;
    check L142() else D39();
  L141():
    r81 = dyn base10(<sym r.arch>);
    goto L31(r81);
  L182():
    magic_hm67 = force? magic_hm66;
    checkMissing(magic_hm67);
    r102 = `==`(magic17, magic_hm67);
    c56 = `as.logical`(r102);
    c57 = `||`(c53, c56);
    goto L43(c57);
  L186():
    p21 = prom<V +>{
      readBin4 = ldf readBin;
      p18 = prom<V +>{
        f12 = ld f;
        f13 = force? f12;
        checkMissing(f13);
        return f13;
      };
      p19 = prom<V +>{
        abi = ld abi;
        abi1 = force? abi;
        checkMissing(abi1);
        r105 = `==`(abi1, 64);
        c60 = `as.logical`(r105);
        if c60 then L2() else L0();
      L0():
        goto L1(6, 0);
      L1(r108, r109):
        r110 = `+`(r108, r109);
        return r110;
      L2():
        goto L1(6, 1);
      };
      p20 = prom<V +>{
        end = ld end;
        end1 = force? end;
        checkMissing(end1);
        return end1;
      };
      r113 = dyn readBin4[, , , endian](p18, 1, p19, p20);
      return r113;
    };
    r115 = dyn i2r1(p21);
    check L187() else D62();
  D39():
    deopt 202 [r_arch2];
  D62():
    deopt 285 [r115];
  L24(dx9):
    st `r.arch` = dx9;
    sym9 = ldf `is.null`;
    base9 = ldf `is.null` in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L125() else L126();
  L30(dx17):
    st `r.arch` = dx17;
    goto L29();
  L32():
    seek = ldf seek;
    check L146() else D40();
  L116():
    dr8 = tryDispatchBuiltin.1("[[", archs5);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L118() else L117(dr8);
  L117(archs7):
    R_Version = ldf `R.Version`;
    check L119() else D33();
  L136():
    dr14 = tryDispatchBuiltin.1("[[", archs17);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L138() else L137(dr14);
  L137(archs19):
    arch3 = ld arch;
    check L139() else D38();
  L142():
    r_arch3 = force? r_arch2;
    checkMissing(r_arch3);
    c23 = `==`(r_arch3, NULL);
    goto L31(c23);
  L143():
    popenv;
    return NULL;
  L187():
    st mh = r115;
    info11 = ld info;
    check L188() else D63();
  D33():
    deopt 178 [archs7];
  D38():
    deopt 197 [archs19, arch3];
  D40():
    deopt 211 [];
  D63():
    deopt 287 [info11];
  L25(r78):
    c20 = `as.logical`(r78);
    if c20 then L128() else L26();
  L118():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L24(dx8);
  L119():
    r72 = dyn R_Version();
    check L120() else D34();
  L125():
    r_arch = ld `r.arch`;
    check L127() else D35();
  L126():
    r77 = dyn base9(<sym r.arch>);
    goto L25(r77);
  L138():
    dx16 = getTryDispatchBuiltinValue(dr14);
    goto L30(dx16);
  L139():
    arch4 = force? arch3;
    __6 = ldf `[[` in base;
    r80 = dyn __6(archs19, arch4);
    goto L30(r80);
  L146():
    p15 = prom<V +>{
      f8 = ld f;
      f9 = force? f8;
      checkMissing(f9);
      return f9;
    };
    p16 = prom<V +>{
      r_arch4 = ld `r.arch`;
      r_arch5 = force? r_arch4;
      checkMissing(r_arch5);
      c25 = `is.object`(r_arch5);
      if c25 then L1() else L2(r_arch5);
    L0(dx19):
      return dx19;
    L1():
      dr16 = tryDispatchBuiltin.1("$", r_arch5);
      dc8 = getTryDispatchBuiltinDispatched(dr16);
      if dc8 then L3() else L2(dr16);
    L2(r_arch7):
      r86 = `$`(r_arch7, <sym offset>);
      goto L0(r86);
    L3():
      dx18 = getTryDispatchBuiltinValue(dr16);
      goto L0(dx18);
    };
    r88 = dyn seek(p15, p16, "start", "read");
    check L147() else D41();
  L188():
    info12 = force? info11;
    checkMissing(info12);
    r116 = `==`(info12, "head");
    c61 = `as.logical`(r116);
    if c61 then L189() else L46();
  D34():
    deopt 179 [archs7, r72];
  D35():
    deopt 184 [r_arch];
  D41():
    deopt 216 [r88];
  L26():
    goto L28(NULL);
  L28(dx14):
    goto L29();
  L46():
    unlist = ldf unlist;
    check L207() else D71();
  L120():
    c18 = `is.object`(r72);
    if c18 then L122() else L123(archs7, r72);
  L127():
    r_arch1 = force? r_arch;
    checkMissing(r_arch1);
    c19 = `==`(r_arch1, NULL);
    goto L25(c19);
  L128():
    archs12 = ld archs;
    check L129() else D36();
  L147():
    readBin3 = ldf readBin;
    check L148() else D42();
  L189():
    sym11 = ldf list;
    base11 = ldf list in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L190() else L191();
  D36():
    deopt 187 [archs12];
  D42():
    deopt 218 [];
  D71():
    deopt 322 [];
  L47(r118):
    popenv;
    return r118;
  L121(archs11, dx11):
    __4 = ldf `[[` in base;
    r76 = dyn __4(archs11, dx11);
    goto L24(r76);
  L122():
    dr10 = tryDispatchBuiltin.1("$", r72);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L124() else L123(archs7, dr10);
  L123(archs9, r74):
    r75 = `$`(r74, <sym arch>);
    goto L121(archs9, r75);
  L129():
    archs13 = force? archs12;
    checkMissing(archs13);
    c21 = `is.object`(archs13);
    if c21 then L130() else L131(archs13);
  L148():
    p17 = prom<V +>{
      f10 = ld f;
      f11 = force? f10;
      checkMissing(f11);
      return f11;
    };
    r90 = dyn readBin3[, , , endian](p17, 1, 1, "big");
    check L149() else D43();
  L190():
    cpu2name1 = ldf cpu2name;
    check L192() else D64();
  L191():
    r117 = dyn base11[cpu, type, filetype, endian, abi](<lang cpu2name(`[`(mh, 1))>, <lang `[`(mh, `:`(1.0, 2.0))>, <lang `[`(mh, 3)>, <sym end>, <sym abi>);
    goto L47(r117);
  L207():
    p39 = prom<V +>{
      replicate1 = ldf replicate;
      p23 = prom<V +>{
        mh12 = ld mh;
        mh13 = force? mh12;
        checkMissing(mh13);
        c65 = `is.object`(mh13);
        if c65 then L1() else L2(mh13);
      L0(dx27):
        return dx27;
      L1():
        dr24 = tryDispatchBuiltin.1("[", mh13);
        dc12 = getTryDispatchBuiltinDispatched(dr24);
        if dc12 then L3() else L2(dr24);
      L2(mh15):
        __10 = ldf `[` in base;
        r127 = dyn __10(mh15, 4);
        goto L0(r127);
      L3():
        dx26 = getTryDispatchBuiltinValue(dr24);
        goto L0(dx26);
      };
      p38 = prom<V +>{
        i2r2 = ldf i2r;
        p26 = prom<V +>{
          readBin5 = ldf readBin;
          p24 = prom<V +>{
            f14 = ld f;
            f15 = force? f14;
            checkMissing(f15);
            return f15;
          };
          p25 = prom<V +>{
            end4 = ld end;
            end5 = force? end4;
            checkMissing(end5);
            return end5;
          };
          r131 = dyn readBin5[, , , endian](p24, 1, 2, p25);
          return r131;
        };
        r133 = dyn i2r2(p26);
        st lc = r133;
        lc = ld lc;
        lc1 = force? lc;
        checkMissing(lc1);
        c66 = `is.object`(lc1);
        if c66 then L31() else L32(lc1);
      L0(dx29):
        LC_LOAD_DYLIB = ld LC_LOAD_DYLIB;
        LC_LOAD_DYLIB1 = force? LC_LOAD_DYLIB;
        checkMissing(LC_LOAD_DYLIB1);
        r135 = `==`(dx29, LC_LOAD_DYLIB1);
        c67 = `as.logical`(r135);
        if c67 then L34() else L1(c67);
      L31():
        dr26 = tryDispatchBuiltin.1("[", lc1);
        dc13 = getTryDispatchBuiltinDispatched(dr26);
        if dc13 then L33() else L32(dr26);
      L32(lc3):
        __11 = ldf `[` in base;
        r134 = dyn __11(lc3, 1);
        goto L0(r134);
      L1(c69):
        c73 = `as.logical`(c69);
        if c73 then L36() else L2(c73);
      L33():
        dx28 = getTryDispatchBuiltinValue(dr26);
        goto L0(dx28);
      L34():
        info13 = ld info;
        info14 = force? info13;
        checkMissing(info14);
        r136 = `==`(info14, "loads");
        c70 = `as.logical`(r136);
        c71 = `&&`(c67, c70);
        goto L1(c71);
      L2(c75):
        c84 = `as.logical`(c75);
        if c84 then L4(c84) else L41();
      L36():
        lc4 = ld lc;
        lc5 = force? lc4;
        checkMissing(lc5);
        c76 = `is.object`(lc5);
        if c76 then L37() else L38(c73, lc5);
      L3(c80, dx31):
        r138 = `>`(dx31, 24);
        c81 = `as.logical`(r138);
        c82 = `&&`(c80, c81);
        goto L2(c82);
      L4(c85):
        c122 = `as.logical`(c85);
        if c122 then L9(c122) else L53();
      L37():
        dr28 = tryDispatchBuiltin.1("[", lc5);
        dc14 = getTryDispatchBuiltinDispatched(dr28);
        if dc14 then L39() else L38(c73, dr28);
      L38(c78, lc7):
        __12 = ldf `[` in base;
        r137 = dyn __12(lc7, 2);
        goto L3(c78, r137);
      L41():
        lc8 = ld lc;
        lc9 = force? lc8;
        checkMissing(lc9);
        c87 = `is.object`(lc9);
        if c87 then L42() else L43(c84, lc9);
      L5(c91, dx33):
        LC_ID_DYLIB = ld LC_ID_DYLIB;
        LC_ID_DYLIB1 = force? LC_ID_DYLIB;
        checkMissing(LC_ID_DYLIB1);
        r140 = `==`(dx33, LC_ID_DYLIB1);
        c92 = `as.logical`(r140);
        if c92 then L45() else L6(c91, c92);
      L9(c123):
        c160 = `as.logical`(c123);
        if c160 then L65() else L14();
      L39():
        dx30 = getTryDispatchBuiltinValue(dr28);
        goto L3(c73, dx30);
      L42():
        dr30 = tryDispatchBuiltin.1("[", lc9);
        dc15 = getTryDispatchBuiltinDispatched(dr30);
        if dc15 then L44() else L43(c84, dr30);
      L43(c89, lc11):
        __13 = ldf `[` in base;
        r139 = dyn __13(lc11, 1);
        goto L5(c89, r139);
      L53():
        lc16 = ld lc;
        lc17 = force? lc16;
        checkMissing(lc17);
        c125 = `is.object`(lc17);
        if c125 then L54() else L55(c122, lc17);
      L6(c95, c96):
        c101 = `as.logical`(c96);
        if c101 then L47() else L7(c95, c101);
      L10(c129, dx37):
        LC_RPATH = ld LC_RPATH;
        LC_RPATH1 = force? LC_RPATH;
        checkMissing(LC_RPATH1);
        r145 = `==`(dx37, LC_RPATH1);
        c130 = `as.logical`(r145);
        if c130 then L57() else L11(c129, c130);
      L14():
        seek1 = ldf seek;
        p36 = prom<V +>{
          f20 = ld f;
          f21 = force? f20;
          checkMissing(f21);
          return f21;
        };
        p37 = prom<V +>{
          lc32 = ld lc;
          lc33 = force? lc32;
          checkMissing(lc33);
          c176 = `is.object`(lc33);
          if c176 then L1() else L2(lc33);
        L0(dx55):
          r233 = `-`(dx55, 8.0);
          return r233;
        L1():
          dr50 = tryDispatchBuiltin.1("[", lc33);
          dc25 = getTryDispatchBuiltinDispatched(dr50);
          if dc25 then L3() else L2(dr50);
        L2(lc35):
          __23 = ldf `[` in base;
          r232 = dyn __23(lc35, 2);
          goto L0(r232);
        L3():
          dx54 = getTryDispatchBuiltinValue(dr50);
          goto L0(dx54);
        };
        dyn seek1(p36, p37, "current", "read");
        return NULL;
      L44():
        dx32 = getTryDispatchBuiltinValue(dr30);
        goto L5(c84, dx32);
      L45():
        info15 = ld info;
        info16 = force? info15;
        checkMissing(info16);
        r141 = `==`(info16, "id");
        c97 = `as.logical`(r141);
        c98 = `&&`(c92, c97);
        goto L6(c91, c98);
      L54():
        dr34 = tryDispatchBuiltin.1("[", lc17);
        dc17 = getTryDispatchBuiltinDispatched(dr34);
        if dc17 then L56() else L55(c122, dr34);
      L55(c127, lc19):
        __15 = ldf `[` in base;
        r144 = dyn __15(lc19, 1);
        goto L10(c127, r144);
      L65():
        lc24 = ld lc;
        lc25 = force? lc24;
        checkMissing(lc25);
        c161 = `is.object`(lc25);
        if c161 then L66() else L67(lc25);
      L7(c104, c105):
        c119 = `as.logical`(c105);
        c120 = `||`(c104, c119);
        goto L4(c120);
      L11(c133, c134):
        c139 = `as.logical`(c134);
        if c139 then L59() else L12(c133, c139);
      L15(dx41):
        LC_RPATH2 = ld LC_RPATH;
        LC_RPATH3 = force? LC_RPATH2;
        checkMissing(LC_RPATH3);
        r150 = `==`(dx41, LC_RPATH3);
        c162 = `as.logical`(r150);
        if c162 then L69() else L16();
      L47():
        lc12 = ld lc;
        lc13 = force? lc12;
        checkMissing(lc13);
        c106 = `is.object`(lc13);
        if c106 then L48() else L49(c95, c101, lc13);
      L56():
        dx36 = getTryDispatchBuiltinValue(dr34);
        goto L10(c122, dx36);
      L57():
        info17 = ld info;
        info18 = force? info17;
        checkMissing(info18);
        r146 = `==`(info18, "rpaths");
        c135 = `as.logical`(r146);
        c136 = `&&`(c130, c135);
        goto L11(c129, c136);
      L66():
        dr38 = tryDispatchBuiltin.1("[", lc25);
        dc19 = getTryDispatchBuiltinDispatched(dr38);
        if dc19 then L68() else L67(dr38);
      L67(lc27):
        __17 = ldf `[` in base;
        r149 = dyn __17(lc27, 1);
        goto L15(r149);
      L8(c113, c114, dx35):
        r143 = `>`(dx35, 24);
        c115 = `as.logical`(r143);
        c116 = `&&`(c114, c115);
        goto L7(c113, c116);
      L12(c142, c143):
        c157 = `as.logical`(c143);
        c158 = `||`(c142, c157);
        goto L9(c158);
      L16():
        goto L17(4);
      L17(r151):
        st nent = r151;
        i2r3 = ldf i2r;
        p30 = prom<V +>{
          readBin6 = ldf readBin;
          p27 = prom<V +>{
            f16 = ld f;
            f17 = force? f16;
            checkMissing(f17);
            return f17;
          };
          p28 = prom<V +>{
            nent = ld nent;
            nent1 = force? nent;
            checkMissing(nent1);
            return nent1;
          };
          p29 = prom<V +>{
            end6 = ld end;
            end7 = force? end6;
            checkMissing(end7);
            return end7;
          };
          r155 = dyn readBin6[, , , endian](p27, 1, p28, p29);
          return r155;
        };
        r157 = dyn i2r3(p30);
        st ld = r157;
        readBin7 = ldf readBin;
        p31 = prom<V +>{
          f18 = ld f;
          f19 = force? f18;
          checkMissing(f19);
          return f19;
        };
        p32 = prom<V +>{
          raw = ldf raw;
          r159 = dyn raw();
          return r159;
        };
        p33 = prom<V +>{
          lc28 = ld lc;
          lc29 = force? lc28;
          checkMissing(lc29);
          c163 = `is.object`(lc29);
          if c163 then L1() else L2(lc29);
        L0(dx43):
          nent2 = ld nent;
          nent3 = force? nent2;
          checkMissing(nent3);
          r162 = `*`(nent3, 4);
          r163 = `+`(8, r162);
          r164 = `-`(dx43, r163);
          return r164;
        L1():
          dr40 = tryDispatchBuiltin.1("[", lc29);
          dc20 = getTryDispatchBuiltinDispatched(dr40);
          if dc20 then L3() else L2(dr40);
        L2(lc31):
          __18 = ldf `[` in base;
          r161 = dyn __18(lc31, 2);
          goto L0(r161);
        L3():
          dx42 = getTryDispatchBuiltinValue(dr40);
          goto L0(dx42);
        };
        r166 = dyn readBin7(p31, p32, p33);
        st r = r166;
        ld = ld ld;
        ld1 = force? ld;
        checkMissing(ld1);
        c164 = `is.object`(ld1);
        if c164 then L71() else L72(ld1);
      L48():
        dr32 = tryDispatchBuiltin.1("[", lc13);
        dc16 = getTryDispatchBuiltinDispatched(dr32);
        if dc16 then L50() else L49(c95, c101, dr32);
      L49(c109, c110, lc15):
        __14 = ldf `[` in base;
        r142 = dyn __14(lc15, 2);
        goto L8(c109, c110, r142);
      L59():
        lc20 = ld lc;
        lc21 = force? lc20;
        checkMissing(lc21);
        c144 = `is.object`(lc21);
        if c144 then L60() else L61(c133, c139, lc21);
      L68():
        dx40 = getTryDispatchBuiltinValue(dr38);
        goto L15(dx40);
      L69():
        goto L17(1);
      L13(c151, c152, dx39):
        r148 = `>`(dx39, 12);
        c153 = `as.logical`(r148);
        c154 = `&&`(c152, c153);
        goto L12(c151, c154);
      L18(dx45):
        nent4 = ld nent;
        nent5 = force? nent4;
        checkMissing(nent5);
        r168 = `*`(nent5, 4);
        r169 = `+`(8, r168);
        r170 = `-`(dx45, r169);
        st o = r170;
        o = ld o;
        o1 = force? o;
        checkMissing(o1);
        sym12 = ldf length;
        base12 = ldf length in base;
        guard12 = `==`.4(sym12, base12);
        if guard12 then L74() else L75();
      L50():
        dx34 = getTryDispatchBuiltinValue(dr32);
        goto L8(c95, c101, dx34);
      L60():
        dr36 = tryDispatchBuiltin.1("[", lc21);
        dc18 = getTryDispatchBuiltinDispatched(dr36);
        if dc18 then L62() else L61(c133, c139, dr36);
      L61(c147, c148, lc23):
        __16 = ldf `[` in base;
        r147 = dyn __16(lc23, 2);
        goto L13(c147, c148, r147);
      L71():
        dr42 = tryDispatchBuiltin.1("[", ld1);
        dc21 = getTryDispatchBuiltinDispatched(dr42);
        if dc21 then L73() else L72(dr42);
      L72(ld3):
        __19 = ldf `[` in base;
        r167 = dyn __19(ld3, 1);
        goto L18(r167);
      L19(o4, r172):
        r176 = `<`(o4, r172);
        c165 = `as.logical`(r176);
        if c165 then L76() else L20(c165);
      L62():
        dx38 = getTryDispatchBuiltinValue(dr36);
        goto L13(c133, c139, dx38);
      L73():
        dx44 = getTryDispatchBuiltinValue(dr42);
        goto L18(dx44);
      L74():
        r173 = ld r;
        r174 = force? r173;
        checkMissing(r174);
        length = ldf length in base;
        r175 = dyn length(r174);
        goto L19(o1, r175);
      L75():
        r171 = dyn base12(<sym r>);
        goto L19(o1, r171);
      L20(c167):
        c171 = `as.logical`(c167);
        if c171 then L78() else L21();
      L76():
        o5 = ld o;
        o6 = force? o5;
        checkMissing(o6);
        r177 = `>`(o6, 0.0);
        c168 = `as.logical`(r177);
        c169 = `&&`(c165, c168);
        goto L20(c169);
      L21():
        goto L25();
      L25():
        sym15 = ldf any;
        base15 = ldf any in base;
        guard15 = `==`.4(sym15, base15);
        if guard15 then L87() else L88();
      L78():
        r178 = ld r;
        r179 = force? r178;
        checkMissing(r179);
        c172 = `is.object`(r179);
        if c172 then L79() else L80(r179);
      L22(dx47):
        st r = dx47;
        goto L25();
      L26(r199):
        c173 = `as.logical`(r199);
        if c173 then L89() else L27();
      L79():
        dr44 = tryDispatchBuiltin.1("[", r179);
        dc22 = getTryDispatchBuiltinDispatched(dr44);
        if dc22 then L81() else L80(dr44);
      L80(r181):
        sym13 = ldf `seq.int`;
        base13 = ldf `seq.int` in base;
        guard13 = `==`.4(sym13, base13);
        if guard13 then L82() else L83();
      L87():
        r200 = ld r;
        r201 = force? r200;
        checkMissing(r201);
        r202 = `==`(r201, 0);
        any = ldf any in base;
        r203 = dyn any(r202);
        goto L26(r203);
      L88():
        r198 = dyn base15(<lang `==`(r, 0)>);
        goto L26(r198);
      L23(r185, r186):
        __20 = ldf `[` in base;
        r197 = dyn __20(r185, r186);
        goto L22(r197);
      L27():
        goto L30();
      L30():
        rawToChar = ldf rawToChar;
        p35 = prom<V +>{
          r227 = ld r;
          r228 = force? r227;
          checkMissing(r228);
          return r228;
        };
        r230 = dyn rawToChar(p35);
        return r230;
      L81():
        dx46 = getTryDispatchBuiltinValue(dr44);
        goto L22(dx46);
      L82():
        o7 = ld o;
        o8 = force? o7;
        checkMissing(o8);
        r187 = `+`(o8, 1);
        sym14 = ldf length;
        base14 = ldf length in base;
        guard14 = `==`.4(sym14, base14);
        if guard14 then L84() else L85();
      L83():
        r184 = dyn base13(<lang `+`(o, 1)>, <lang length(r)>);
        goto L23(r181, r184);
      L89():
        r204 = ld r;
        r205 = force? r204;
        checkMissing(r205);
        c174 = `is.object`(r205);
        if c174 then L90() else L91(r205);
      L24(r191, r192):
        seq_int = ldf `seq.int` in base;
        r196 = dyn seq_int(r187, r192);
        goto L23(r191, r196);
      L28(dx50):
        st r = dx50;
        goto L30();
      L84():
        r193 = ld r;
        r194 = force? r193;
        checkMissing(r194);
        length1 = ldf length in base;
        r195 = dyn length1(r194);
        goto L24(r181, r195);
      L85():
        r190 = dyn base14(<sym r>);
        goto L24(r181, r190);
      L90():
        dr46 = tryDispatchBuiltin.1("[", r205);
        dc23 = getTryDispatchBuiltinDispatched(dr46);
        if dc23 then L92() else L91(dr46);
      L91(r207):
        which = ldf which;
        p34 = prom<V +>{
          r208 = ld r;
          r209 = force? r208;
          checkMissing(r209);
          r210 = `==`(r209, 0);
          return r210;
        };
        r212 = dyn which(p34);
        c175 = `is.object`(r212);
        if c175 then L93() else L94(r207, 1.0, r212);
      L29(r221, r222, dx52):
        r224 = `-`(dx52, 1);
        r225 = `:`(r222, r224);
        __22 = ldf `[` in base;
        r226 = dyn __22(r221, r225);
        goto L28(r226);
      L92():
        dx49 = getTryDispatchBuiltinValue(dr46);
        goto L28(dx49);
      L93():
        dr48 = tryDispatchBuiltin.1("[", r212);
        dc24 = getTryDispatchBuiltinDispatched(dr48);
        if dc24 then L95() else L94(r207, 1.0, dr48);
      L94(r216, r217, r218):
        __21 = ldf `[` in base;
        r223 = dyn __21(r218, 1);
        goto L29(r216, r217, r223);
      L95():
        dx51 = getTryDispatchBuiltinValue(dr48);
        goto L29(r207, 1.0, dx51);
      };
      r237 = dyn replicate1(p23, p38);
      return r237;
    };
    r239 = dyn unlist(p39);
    check L208() else D72();
  D43():
    deopt 224 [r90];
  D64():
    deopt 294 [];
  D72():
    deopt 324 [r239];
  L27(dx13):
    st `r.arch` = dx13;
    goto L28(dx13);
  L124():
    dx10 = getTryDispatchBuiltinValue(dr10);
    goto L121(archs7, dx10);
  L130():
    dr12 = tryDispatchBuiltin.1("[[", archs13);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L132() else L131(dr12);
  L131(archs15):
    __5 = ldf `[[` in base;
    r79 = dyn __5(archs15, 1);
    goto L27(r79);
  L149():
    st magic = r90;
    goto L34();
  L192():
    p22 = prom<V +>{
      mh = ld mh;
      mh1 = force? mh;
      checkMissing(mh1);
      c62 = `is.object`(mh1);
      if c62 then L1() else L2(mh1);
    L0(dx21):
      return dx21;
    L1():
      dr18 = tryDispatchBuiltin.1("[", mh1);
      dc9 = getTryDispatchBuiltinDispatched(dr18);
      if dc9 then L3() else L2(dr18);
    L2(mh3):
      __7 = ldf `[` in base;
      r119 = dyn __7(mh3, 1);
      goto L0(r119);
    L3():
      dx20 = getTryDispatchBuiltinValue(dr18);
      goto L0(dx20);
    };
    r121 = dyn cpu2name1(p22);
    check L193() else D65();
  L208():
    popenv;
    return r239;
  D65():
    deopt 296 [r121];
  L132():
    dx12 = getTryDispatchBuiltinValue(dr12);
    goto L27(dx12);
  L193():
    mh4 = ld mh;
    check L194() else D66();
  D66():
    deopt 298 [mh4];
  L194():
    mh5 = force? mh4;
    checkMissing(mh5);
    c63 = `is.object`(mh5);
    if c63 then L195() else L196(mh5);
  L48(dx23):
    mh8 = ld mh;
    check L198() else D67();
  L195():
    dr20 = tryDispatchBuiltin.1("[", mh5);
    dc10 = getTryDispatchBuiltinDispatched(dr20);
    if dc10 then L197() else L196(dr20);
  L196(mh7):
    __8 = ldf `[` in base;
    r122 = dyn __8(mh7, <int 1, 2>);
    goto L48(r122);
  D67():
    deopt 304 [mh8];
  L197():
    dx22 = getTryDispatchBuiltinValue(dr20);
    goto L48(dx22);
  L198():
    mh9 = force? mh8;
    checkMissing(mh9);
    c64 = `is.object`(mh9);
    if c64 then L199() else L200(mh9);
  L49(dx25):
    end2 = ld end;
    check L202() else D68();
  L199():
    dr22 = tryDispatchBuiltin.1("[", mh9);
    dc11 = getTryDispatchBuiltinDispatched(dr22);
    if dc11 then L201() else L200(dr22);
  L200(mh11):
    __9 = ldf `[` in base;
    r123 = dyn __9(mh11, 3);
    goto L49(r123);
  D68():
    deopt 310 [end2];
  L201():
    dx24 = getTryDispatchBuiltinValue(dr22);
    goto L49(dx24);
  L202():
    end3 = force? end2;
    checkMissing(end3);
    abi2 = ld abi;
    check L203() else D69();
  D69():
    deopt 313 [abi2];
  L203():
    abi3 = force? abi2;
    checkMissing(abi3);
    list2 = ldf list in base;
    r124 = dyn list2(r121, dx23, dx25, end3, abi3);
    check L204() else D70();
  D70():
    deopt 317 [r124];
  L204():
    goto L47(r124);
  }
}
fun inner3002224933(i) {
  (reg i:*) -+> V { var i:*, reg ifelse:cls, reg i1:*, reg i2:V, reg r:V, reg p:p(V +), reg i3:*, reg i4:V, reg r2:V, reg p1:p(V +), reg i5:*, reg i6:V, reg p2:p(V +), reg r5:V |
    mkenv;
    st i = i;
    ifelse = ldf ifelse;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p = prom<V +>{
      i1 = ld i;
      i2 = force? i1;
      checkMissing(i2);
      r = `<`(i2, 0.0);
      return r;
    };
    p1 = prom<V +>{
      i3 = ld i;
      i4 = force? i3;
      checkMissing(i4);
      r2 = `+`(4.294967296E9, i4);
      return r2;
    };
    p2 = prom<V +>{
      i5 = ld i;
      i6 = force? i5;
      checkMissing(i6);
      return i6;
    };
    r5 = dyn ifelse(p, p1, p2);
    check L1() else D1();
  D1():
    deopt 5 [r5];
  L1():
    popenv;
    return r5;
  }
}
fun inner2205765457(ct) {
  (reg ct:*) -+> V { var ct:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg ct1:*, reg ct2:V, reg cpu_types:*, reg cpu_types1:V, reg match:cls, reg r2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg r4:V, reg cpu:*, reg cpu1:V, reg is_na:cls, reg r5:V, reg r6:V, reg c:L, reg sym2:cls, reg base2:cls, reg guard2:L, reg r7:V, reg r8:V, reg cpu_types2:*, reg cpu_types3:V, reg names:cls, reg r9:V, reg c1:L, reg r11:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg cpu2:*, reg cpu3:V, reg __:cls, reg r12:V |
    mkenv;
    st ct = ct;
    sym = ldf match;
    base = ldf match in base;
    guard = `==`.4(sym, base);
    if guard then L5() else L6();
  L0(r1):
    st cpu = r1;
    sym1 = ldf `is.na`;
    base1 = ldf `is.na` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L10() else L11();
  L5():
    ct1 = ld ct;
    check L7() else D0();
  L6():
    r = dyn base(<sym ct>, <sym cpu.types>);
    goto L0(r);
  D0():
    deopt 2 [ct1];
  L1(r4):
    r6 = `!`(r4);
    c = `as.logical`(r6);
    if c then L14() else L2();
  L7():
    ct2 = force? ct1;
    checkMissing(ct2);
    cpu_types = ld `cpu.types`;
    check L8() else D1();
  L10():
    cpu = ld cpu;
    check L12() else D3();
  L11():
    r3 = dyn base1(<sym cpu>);
    goto L1(r3);
  D1():
    deopt 4 [cpu_types];
  D3():
    deopt 13 [cpu];
  L2():
    popenv;
    return "<unknown>";
  L8():
    cpu_types1 = force? cpu_types;
    checkMissing(cpu_types1);
    match = ldf match in base;
    r2 = dyn match(ct2, cpu_types1, NA_INT, NULL);
    check L9() else D2();
  L12():
    cpu1 = force? cpu;
    checkMissing(cpu1);
    is_na = ldf `is.na` in base;
    r5 = dyn is_na(cpu1);
    check L13() else D4();
  L14():
    sym2 = ldf names;
    base2 = ldf names in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L15() else L16();
  D2():
    deopt 9 [r2];
  D4():
    deopt 16 [r5];
  L3(r8):
    c1 = `is.object`(r8);
    if c1 then L19() else L20(r8);
  L9():
    goto L0(r2);
  L13():
    goto L1(r5);
  L15():
    cpu_types2 = ld `cpu.types`;
    check L17() else D5();
  L16():
    r7 = dyn base2(<sym cpu.types>);
    goto L3(r7);
  D5():
    deopt 20 [cpu_types2];
  L4(dx1):
    popenv;
    return dx1;
  L17():
    cpu_types3 = force? cpu_types2;
    checkMissing(cpu_types3);
    names = ldf names in base;
    r9 = dyn names(cpu_types3);
    check L18() else D6();
  L19():
    dr = tryDispatchBuiltin.1("[", r8);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L21() else L20(dr);
  L20(r11):
    cpu2 = ld cpu;
    check L22() else D7();
  D6():
    deopt 23 [r9];
  D7():
    deopt 24 [r11, cpu2];
  L18():
    goto L3(r9);
  L21():
    dx = getTryDispatchBuiltinValue(dr);
    goto L4(dx);
  L22():
    cpu3 = force? cpu2;
    __ = ldf `[` in base;
    r12 = dyn __(r11, cpu3);
    goto L4(r12);
  }
}
fun inner1942959787(o) {
  (reg o:*) -+> V { var o:*, reg o1:*, reg o2:V, reg c:L, reg o4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r:V |
    mkenv;
    st o = o;
    o1 = ld o;
    check L0() else D0();
  D0():
    deopt 0 [o1];
  L0():
    o2 = force? o1;
    checkMissing(o2);
    c = `is.object`(o2);
    if c then L2() else L3(o2);
  L1(dx1):
    popenv;
    return dx1;
  L2():
    dr = tryDispatchBuiltin.1("$", o2);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L4() else L3(dr);
  L3(o4):
    r = `$`(o4, <sym cpu>);
    goto L1(r);
  L4():
    dx = getTryDispatchBuiltinValue(dr);
    goto L1(dx);
  }
}