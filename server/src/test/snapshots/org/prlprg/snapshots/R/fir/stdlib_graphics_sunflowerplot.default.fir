fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3279863723;
    st `sunflowerplot.default` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3279863723(x, y, number, log, digits, xlab, ylab, xlim, ylim, add, rotate, pch, cex, `cex.fact`, col, bg, size, `seg.col`, `seg.lwd`, `...`) {
  (reg x:*, reg y:*, reg number:*, reg log:*, reg digits:*, reg xlab:*, reg ylab:*, reg xlim:*, reg ylim:*, reg add:*, reg rotate:*, reg pch:*, reg cex:*, reg cex_fact:*, reg col:*, reg bg:*, reg size:*, reg seg_col:*, reg seg_lwd:*, reg ddd:dots) -+> V { var x:*, var y:*, reg y_isMissing:L, reg y_orDefault:*, var number:*, var log:*, reg log_isMissing:L, reg log_orDefault:*, var digits:*, reg digits_isMissing:L, reg digits_orDefault:*, var xlab:*, reg xlab_isMissing:L, reg xlab_orDefault:*, var ylab:*, reg ylab_isMissing:L, reg ylab_orDefault:*, var xlim:*, reg xlim_isMissing:L, reg xlim_orDefault:*, var ylim:*, reg ylim_isMissing:L, reg ylim_orDefault:*, var add:*, reg add_isMissing:L, reg add_orDefault:*, var rotate:*, reg rotate_isMissing:L, reg rotate_orDefault:*, var pch:*, reg pch_isMissing:L, reg pch_orDefault:*, var cex:*, reg cex_isMissing:L, reg cex_orDefault:*, var `cex.fact`:*, reg cex_fact_isMissing:L, reg cex_fact_orDefault:*, var col:*, reg col_isMissing:L, reg col_orDefault:*, reg par:cls, reg r:V, reg p:p(V +), var bg:*, reg bg_isMissing:L, reg bg_orDefault:*, var size:*, reg size_isMissing:L, reg size_orDefault:*, reg p1:p(V +), var `seg.col`:*, reg seg_col_isMissing:L, reg seg_col_orDefault:*, var `seg.lwd`:*, reg seg_lwd_isMissing:L, reg seg_lwd_orDefault:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r3:V, reg r4:V, reg missing:cls, reg r5:V, reg r6:V, reg c:L, reg deparse1:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r7:V, reg r8:V, reg substitute:cls, reg r9:V, reg p2:p(V +), reg r11:V, reg r12:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r13:V, reg r14:V, reg missing1:cls, reg r15:V, reg r16:V, reg c1:L, reg deparse2:cls, reg sym3:cls, reg base3:cls, reg guard3:L, reg r17:V, reg r18:V, reg substitute1:cls, reg r19:V, reg p3:p(V +), reg r21:V, reg r22:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r23:V, reg r24:V, reg x1:*, reg x2:V, reg is_list:cls, reg r25:V, reg c2:L, reg c4:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r26:V, reg c7:L, reg r27:V, reg _in_:cls, reg sym6:cls, reg base6:cls, reg guard6:L, reg r28:V, reg r29:V, reg c8:cls, reg r30:V, reg p4:p(V +), reg sym7:cls, reg base7:cls, reg guard7:L, reg r32:V, reg r33:V, reg x3:*, reg x4:V, reg names:cls, reg r34:V, reg p5:p(V +), reg r36:V, reg all:cls, reg r37:V, reg c9:L, reg c10:V, reg is_xyn:*, reg is_xyn1:V, reg c12:L, reg x5:*, reg x6:V, reg c13:L, reg x8:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r38:V, reg x9:*, reg x10:V, reg x11:V, reg xy_coords:cls, reg x12:*, reg x13:V, reg p6:p(V +), reg y1:*, reg y2:V, reg p7:p(V +), reg xlabel:*, reg xlabel1:V, reg p8:p(V +), reg ylabel:*, reg ylabel1:V, reg p9:p(V +), reg log1:*, reg log2:V, reg p10:p(V +), reg r44:V, reg add1:*, reg add2:V, reg r45:V, reg c14:L, reg sym8:cls, reg base8:cls, reg guard8:L, reg r46:V, reg r47:V, reg xlab1:*, reg xlab2:V, reg c15:V, reg c16:L, reg xy:*, reg xy1:V, reg c17:L, reg xy3:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r48:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r49:V, reg r50:V, reg ylab1:*, reg ylab2:V, reg c18:V, reg c19:L, reg xy4:*, reg xy5:V, reg c20:L, reg xy7:V, reg dr4:V, reg dc2:L, reg dx5:V, reg dx6:V, reg r51:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r52:V, reg r53:V, reg xlim1:*, reg xlim2:V, reg c21:V, reg c22:L, reg sym11:cls, reg base11:cls, reg guard11:L, reg r54:V, reg r55:V, reg xy8:*, reg xy9:V, reg c23:L, reg xy11:V, reg dr6:V, reg dc3:L, reg dx8:V, reg dx9:V, reg r56:V, reg c24:L, reg dx11:V, reg dr8:V, reg dc4:L, reg dx12:V, reg dx13:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r57:V, reg dx16:V, reg r58:V, reg xy12:*, reg xy13:V, reg c25:L, reg dx18:V, reg xy15:V, reg dr10:V, reg dc5:L, reg dx20:V, reg dx21:V, reg dx22:V, reg r59:V, reg is_finite:cls, reg r60:V, reg __:cls, reg r61:V, reg range:cls, reg r62:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r64:V, reg r65:V, reg ylim1:*, reg ylim2:V, reg c26:V, reg c27:L, reg sym14:cls, reg base14:cls, reg guard14:L, reg r66:V, reg r67:V, reg xy16:*, reg xy17:V, reg c28:L, reg xy19:V, reg dr12:V, reg dc6:L, reg dx23:V, reg dx24:V, reg r68:V, reg c29:L, reg dx26:V, reg dr14:V, reg dc7:L, reg dx27:V, reg dx28:V, reg sym15:cls, reg base15:cls, reg guard15:L, reg r69:V, reg dx31:V, reg r70:V, reg xy20:*, reg xy21:V, reg c30:L, reg dx33:V, reg xy23:V, reg dr16:V, reg dc8:L, reg dx35:V, reg dx36:V, reg dx37:V, reg r71:V, reg is_finite1:cls, reg r72:V, reg __1:cls, reg r73:V, reg range1:cls, reg r74:V, reg r75:V, reg sym16:cls, reg base16:cls, reg guard16:L, reg r77:V, reg r78:V, reg xy24:*, reg xy25:V, reg c31:L, reg xy27:V, reg dr18:V, reg dc9:L, reg dx38:V, reg dx39:V, reg r79:V, reg length:cls, reg r80:V, reg sym17:cls, reg base17:cls, reg guard17:L, reg r81:V, reg r82:V, reg missing2:cls, reg r83:V, reg c32:L, reg xyTable:cls, reg xy28:*, reg xy29:V, reg p11:p(V +), reg digits1:*, reg digits2:V, reg p12:p(V +), reg r86:V, reg tt:*, reg tt1:V, reg c33:L, reg tt3:V, reg dr20:V, reg dc10:L, reg dx40:V, reg dx41:V, reg r87:V, reg tt4:*, reg tt5:V, reg c34:L, reg tt7:V, reg dr22:V, reg dc11:L, reg dx42:V, reg dx43:V, reg r88:V, reg tt8:*, reg tt9:V, reg c35:L, reg tt11:V, reg dr24:V, reg dc12:L, reg dx44:V, reg dx45:V, reg r89:V, reg sym18:cls, reg base18:cls, reg guard18:L, reg r90:V, reg r91:V, reg number1:*, reg number2:V, reg length1:cls, reg r92:V, reg n:*, reg n1:V, reg r93:V, reg c36:L, reg stop:cls, reg r94:V, reg number3:*, reg number4:V, reg r96:V, reg xy30:*, reg xy31:V, reg c37:L, reg xy33:V, reg dr26:V, reg dc13:L, reg dx47:V, reg dx48:V, reg r97:V, reg c38:L, reg dx50:V, reg dr28:V, reg dc14:L, reg dx51:V, reg dx52:V, reg np:*, reg np1:V, reg __2:cls, reg r98:V, reg xy34:*, reg xy35:V, reg c39:L, reg xy37:V, reg dr30:V, reg dc15:L, reg dx53:V, reg dx54:V, reg r99:V, reg c40:L, reg dx56:V, reg dr32:V, reg dc16:L, reg dx57:V, reg dx58:V, reg np2:*, reg np3:V, reg __3:cls, reg r100:V, reg number5:*, reg number6:V, reg c41:L, reg number8:V, reg dr34:V, reg dc17:L, reg dx59:V, reg dx60:V, reg np4:*, reg np5:V, reg __4:cls, reg r101:V, reg sym19:cls, reg base19:cls, reg guard19:L, reg r102:V, reg r103:V, reg x14:*, reg x15:V, reg length2:cls, reg r104:V, reg dev_hold:cls, reg r105:V, reg sym20:cls, reg base20:cls, reg guard20:L, reg r106:V, reg on_exit:cls, reg r108:V, reg add3:*, reg add4:V, reg r109:V, reg c42:L, reg plot:cls, reg x16:*, reg x17:V, reg p13:p(V +), reg y3:*, reg y4:V, reg p14:p(V +), reg xlab3:*, reg xlab4:V, reg p15:p(V +), reg ylab3:*, reg ylab4:V, reg p16:p(V +), reg xlim3:*, reg xlim4:V, reg p17:p(V +), reg ylim3:*, reg ylim4:V, reg p18:p(V +), reg log3:*, reg log4:V, reg p19:p(V +), reg ddd1:dots?, reg r117:V, reg number9:*, reg number10:V, reg r119:V, reg sym21:cls, reg base21:cls, reg guard21:L, reg r120:V, reg r121:V, reg n_is1:*, reg n_is2:V, reg any:cls, reg r122:V, reg c43:L, reg points:cls, reg x18:*, reg x19:V, reg c44:L, reg x21:V, reg dr36:V, reg dc18:L, reg dx61:V, reg dx62:V, reg n_is3:*, reg n_is4:V, reg __5:cls, reg r123:V, reg p20:p(V +), reg y5:*, reg y6:V, reg c45:L, reg y8:V, reg dr38:V, reg dc19:L, reg dx63:V, reg dx64:V, reg n_is5:*, reg n_is6:V, reg __6:cls, reg r125:V, reg p21:p(V +), reg pch1:*, reg pch2:V, reg p22:p(V +), reg col1:*, reg col2:V, reg p23:p(V +), reg bg1:*, reg bg2:V, reg p24:p(V +), reg cex1:*, reg cex2:V, reg p25:p(V +), reg r131:V, reg sym22:cls, reg base22:cls, reg guard22:L, reg r133:V, reg r134:V, reg n_is7:*, reg n_is8:V, reg r135:V, reg any1:cls, reg r136:V, reg c46:L, reg points1:cls, reg x22:*, reg x23:V, reg c47:L, reg x25:V, reg dr40:V, reg dc20:L, reg dx65:V, reg dx66:V, reg n_is9:*, reg n_is10:V, reg r137:V, reg __7:cls, reg r138:V, reg p26:p(V +), reg y9:*, reg y10:V, reg c48:L, reg y12:V, reg dr42:V, reg dc21:L, reg dx67:V, reg dx68:V, reg n_is11:*, reg n_is12:V, reg r140:V, reg __8:cls, reg r141:V, reg p27:p(V +), reg pch3:*, reg pch4:V, reg p28:p(V +), reg col3:*, reg col4:V, reg p29:p(V +), reg bg3:*, reg bg4:V, reg p30:p(V +), reg cex3:*, reg cex4:V, reg cex_fact1:*, reg cex_fact2:V, reg r146:V, reg p31:p(V +), reg r148:V, reg n2:*, reg n3:V, reg r149:V, reg c49:L, reg r151:V, reg dr44:V, reg dc22:L, reg dx69:V, reg dx70:V, reg number11:*, reg number12:V, reg r152:V, reg __9:cls, reg r153:V, reg par1:cls, reg r154:V, reg par2:cls, reg r155:V, reg size1:*, reg size2:V, reg sym23:cls, reg base23:cls, reg guard23:L, reg r156:V, reg size5:V, reg r157:V, reg pusr:*, reg pusr1:V, reg c50:L, reg size7:V, reg pusr3:V, reg dr46:V, reg dc23:L, reg dx71:V, reg size9:V, reg dx72:V, reg __10:cls, reg r158:V, reg pusr4:*, reg pusr5:V, reg c51:L, reg size11:V, reg dx74:V, reg pusr7:V, reg dr48:V, reg dc24:L, reg dx76:V, reg size13:V, reg dx77:V, reg dx78:V, reg __11:cls, reg r159:V, reg r160:V, reg abs:cls, reg r161:V, reg r162:V, reg ppin:*, reg ppin1:V, reg c52:L, reg r164:V, reg ppin3:V, reg dr50:V, reg dc25:L, reg dx79:V, reg r166:V, reg dx80:V, reg __12:cls, reg r167:V, reg r168:V, reg size14:*, reg size15:V, reg sym24:cls, reg base24:cls, reg guard24:L, reg r169:V, reg size18:V, reg r170:V, reg pusr8:*, reg pusr9:V, reg c53:L, reg size20:V, reg pusr11:V, reg dr52:V, reg dc26:L, reg dx81:V, reg size22:V, reg dx82:V, reg __13:cls, reg r171:V, reg pusr12:*, reg pusr13:V, reg c54:L, reg size24:V, reg dx84:V, reg pusr15:V, reg dr54:V, reg dc27:L, reg dx86:V, reg size26:V, reg dx87:V, reg dx88:V, reg __14:cls, reg r172:V, reg r173:V, reg abs1:cls, reg r174:V, reg r175:V, reg ppin4:*, reg ppin5:V, reg c55:L, reg r177:V, reg ppin7:V, reg dr56:V, reg dc28:L, reg dx89:V, reg r179:V, reg dx90:V, reg __15:cls, reg r180:V, reg r181:V, reg sym25:cls, reg base25:cls, reg guard25:L, reg r182:V, reg r183:V, reg i_multi:*, reg i_multi1:V, reg number13:*, reg number14:V, reg c56:L, reg number16:V, reg dr58:V, reg dc29:L, reg dx91:V, reg dx92:V, reg number17:*, reg number18:V, reg r184:V, reg __16:cls, reg r185:V, reg rep_int:cls, reg r186:V, reg numeric:cls, reg r187:V, reg i_multi2:*, reg i_multi3:V, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c57:L, reg x26:V, reg sym26:cls, reg base26:cls, reg guard26:L, reg r188:V, reg i7:I, reg r189:V, reg z:*, reg z1:V, reg number19:*, reg number20:V, reg c58:L, reg i9:I, reg r191:I, reg number22:V, reg dr60:V, reg dc30:L, reg dx93:V, reg i11:I, reg r193:I, reg dx94:V, reg i12:*, reg i13:V, reg __17:cls, reg r194:V, reg r195:V, reg rotate1:*, reg rotate2:V, reg c59:L, reg __18:cls, reg r198:V, reg r199:cls, reg r200:V, reg i16:I, reg r201:V, reg r202:V, reg r203:V, reg c60:cls, reg r204:V, reg z2:*, reg z3:V, reg r205:V, reg number23:*, reg number24:V, reg c61:L, reg r207:V, reg number26:V, reg dr62:V, reg dc31:L, reg dx95:V, reg r209:V, reg dx96:V, reg i_rep:*, reg i_rep1:V, reg __19:cls, reg r210:V, reg r211:V, reg segments:cls, reg x27:*, reg x28:V, reg c62:L, reg x30:V, reg dr64:V, reg dc32:L, reg dx97:V, reg dx98:V, reg i_rep2:*, reg i_rep3:V, reg __20:cls, reg r212:V, reg p32:p(V +), reg y13:*, reg y14:V, reg c63:L, reg y16:V, reg dr66:V, reg dc33:L, reg dx99:V, reg dx100:V, reg i_rep4:*, reg i_rep5:V, reg __21:cls, reg r214:V, reg p33:p(V +), reg x31:*, reg x32:V, reg c64:L, reg x34:V, reg dr68:V, reg dc34:L, reg dx101:V, reg dx102:V, reg i_rep6:*, reg i_rep7:V, reg __22:cls, reg r216:V, reg xr:*, reg xr1:V, reg sym27:cls, reg base27:cls, reg guard27:L, reg r217:V, reg dx105:V, reg xr4:V, reg r218:V, reg deg:*, reg deg1:V, reg r219:V, reg r220:V, reg r221:V, reg p34:p(V +), reg y17:*, reg y18:V, reg c65:L, reg y20:V, reg dr70:V, reg dc35:L, reg dx106:V, reg dx107:V, reg i_rep8:*, reg i_rep9:V, reg __23:cls, reg r223:V, reg yr:*, reg yr1:V, reg sym28:cls, reg base28:cls, reg guard28:L, reg r224:V, reg dx110:V, reg yr4:V, reg r225:V, reg deg2:*, reg deg3:V, reg r226:V, reg r227:V, reg r228:V, reg p35:p(V +), reg seg_col1:*, reg seg_col2:V, reg p36:p(V +), reg seg_lwd1:*, reg seg_lwd2:V, reg p37:p(V +), reg r232:V, reg sym29:cls, reg base29:cls, reg guard29:L, reg r234:V, reg r235:V, reg sym30:cls, reg base30:cls, reg guard30:L, reg r236:V, reg r237:V, reg x35:*, reg x36:V, reg y21:*, reg y22:V, reg number27:*, reg number28:V, reg list:cls, reg r238:V, reg invisible:cls, reg r239:V |
    mkenv;
    st x = x;
    y_isMissing = missing.0(y);
    if y_isMissing then L0(NULL) else L0(y);
  L0(y_orDefault):
    st y = y_orDefault;
    st number = number;
    log_isMissing = missing.0(log);
    if log_isMissing then L1("") else L1(log);
  L1(log_orDefault):
    st log = log_orDefault;
    digits_isMissing = missing.0(digits);
    if digits_isMissing then L2(6) else L2(digits);
  L2(digits_orDefault):
    st digits = digits_orDefault;
    xlab_isMissing = missing.0(xlab);
    if xlab_isMissing then L3(NULL) else L3(xlab);
  L3(xlab_orDefault):
    st xlab = xlab_orDefault;
    ylab_isMissing = missing.0(ylab);
    if ylab_isMissing then L4(NULL) else L4(ylab);
  L4(ylab_orDefault):
    st ylab = ylab_orDefault;
    xlim_isMissing = missing.0(xlim);
    if xlim_isMissing then L5(NULL) else L5(xlim);
  L5(xlim_orDefault):
    st xlim = xlim_orDefault;
    ylim_isMissing = missing.0(ylim);
    if ylim_isMissing then L6(NULL) else L6(ylim);
  L6(ylim_orDefault):
    st ylim = ylim_orDefault;
    add_isMissing = missing.0(add);
    if add_isMissing then L7(FALSE) else L7(add);
  L7(add_orDefault):
    st add = add_orDefault;
    rotate_isMissing = missing.0(rotate);
    if rotate_isMissing then L8(FALSE) else L8(rotate);
  L8(rotate_orDefault):
    st rotate = rotate_orDefault;
    pch_isMissing = missing.0(pch);
    if pch_isMissing then L9(16.0) else L9(pch);
  L9(pch_orDefault):
    st pch = pch_orDefault;
    cex_isMissing = missing.0(cex);
    if cex_isMissing then L10(0.8) else L10(cex);
  L10(cex_orDefault):
    st cex = cex_orDefault;
    cex_fact_isMissing = missing.0(cex_fact);
    if cex_fact_isMissing then L11(1.5) else L11(cex_fact);
  L11(cex_fact_orDefault):
    st `cex.fact` = cex_fact_orDefault;
    col_isMissing = missing.0(col);
    if col_isMissing then L12() else L13(col);
  L12():
    p = prom<V +>{
      par = ldf par;
      r = dyn par("col");
      return r;
    };
    goto L13(p);
  L13(col_orDefault):
    st col = col_orDefault;
    bg_isMissing = missing.0(bg);
    if bg_isMissing then L14(NA_LGL) else L14(bg);
  L14(bg_orDefault):
    st bg = bg_orDefault;
    size_isMissing = missing.0(size);
    if size_isMissing then L15() else L16(size);
  L15():
    p1 = prom<V +>{
      return 0.125;
    };
    goto L16(p1);
  L16(size_orDefault):
    st size = size_orDefault;
    seg_col_isMissing = missing.0(seg_col);
    if seg_col_isMissing then L17(2.0) else L17(seg_col);
  L17(seg_col_orDefault):
    st `seg.col` = seg_col_orDefault;
    seg_lwd_isMissing = missing.0(seg_lwd);
    if seg_lwd_isMissing then L18(1.5) else L18(seg_lwd);
  L18(seg_lwd_orDefault):
    st `seg.lwd` = seg_lwd_orDefault;
    st `...` = ddd;
    sym = ldf missing;
    base = ldf missing in base;
    guard = `==`.4(sym, base);
    if guard then L90() else L91();
  L19(r4):
    r6 = `!`(r4);
    c = `as.logical`(r6);
    if c then L92() else L20();
  L90():
    missing = ldf missing in base;
    r5 = dyn missing(<sym x>);
    goto L19(r5);
  L91():
    r3 = dyn base(<sym x>);
    goto L19(r3);
  L20():
    goto L21(NULL);
  L21(r12):
    st xlabel = r12;
    sym2 = ldf missing;
    base2 = ldf missing in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L96() else L97();
  L92():
    deparse1 = ldf deparse1;
    check L93() else D0();
  D0():
    deopt 5 [];
  L22(r14):
    r16 = `!`(r14);
    c1 = `as.logical`(r16);
    if c1 then L98() else L23();
  L93():
    p2 = prom<V +>{
      sym1 = ldf substitute;
      base1 = ldf substitute in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r8):
      return r8;
    L1():
      substitute = ldf substitute in base;
      r9 = dyn substitute(<sym x>);
      goto L0(r9);
    L2():
      r7 = dyn base1(<sym x>);
      goto L0(r7);
    };
    r11 = dyn deparse1(p2);
    check L94() else D1();
  L96():
    missing1 = ldf missing in base;
    r15 = dyn missing1(<sym y>);
    goto L22(r15);
  L97():
    r13 = dyn base2(<sym y>);
    goto L22(r13);
  D1():
    deopt 7 [r11];
  L23():
    goto L24(NULL);
  L24(r22):
    st ylabel = r22;
    sym4 = ldf `is.list`;
    base4 = ldf `is.list` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L102() else L103();
  L94():
    goto L21(r11);
  L98():
    deparse2 = ldf deparse1;
    check L99() else D2();
  D2():
    deopt 16 [];
  L25(r24):
    c2 = `as.logical`(r24);
    if c2 then L106() else L26(c2);
  L99():
    p3 = prom<V +>{
      sym3 = ldf substitute;
      base3 = ldf substitute in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L1() else L2();
    L0(r18):
      return r18;
    L1():
      substitute1 = ldf substitute in base;
      r19 = dyn substitute1(<sym y>);
      goto L0(r19);
    L2():
      r17 = dyn base3(<sym y>);
      goto L0(r17);
    };
    r21 = dyn deparse2(p3);
    check L100() else D3();
  L102():
    x1 = ld x;
    check L104() else D4();
  L103():
    r23 = dyn base4(<sym x>);
    goto L25(r23);
  D3():
    deopt 18 [r21];
  D4():
    deopt 24 [x1];
  L26(c4):
    st `is.xyn` = c4;
    is_xyn = ld `is.xyn`;
    check L113() else D9();
  L100():
    goto L24(r21);
  L104():
    x2 = force? x1;
    checkMissing(x2);
    is_list = ldf `is.list` in base;
    r25 = dyn is_list(x2);
    check L105() else D5();
  L106():
    sym5 = ldf all;
    base5 = ldf all in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L107() else L108();
  D5():
    deopt 27 [r25];
  D9():
    deopt 39 [is_xyn];
  L27(c7, r27):
    c9 = `as.logical`(r27);
    c10 = `&&`(c7, c9);
    goto L26(c10);
  L105():
    goto L25(r25);
  L107():
    _in_ = ldf `%in%`;
    check L109() else D6();
  L108():
    r26 = dyn base5(<lang `%in%`(c("x", "y", "number"), names(x))>);
    goto L27(c2, r26);
  L113():
    is_xyn1 = force? is_xyn;
    checkMissing(is_xyn1);
    c12 = `as.logical`(is_xyn1);
    if c12 then L114() else L28();
  D6():
    deopt 31 [c2];
  L28():
    xy_coords = ldf `xy.coords`;
    check L122() else D12();
  L29(x11):
    st xy = x11;
    add1 = ld add;
    check L124() else D14();
  L109():
    p4 = prom<V +>{
      sym6 = ldf c;
      base6 = ldf c in base;
      guard6 = `==`.4(sym6, base6);
      if guard6 then L1() else L2();
    L0(r29):
      return r29;
    L1():
      c8 = ldf c in base;
      r30 = dyn c8("x", "y", "number");
      goto L0(r30);
    L2():
      r28 = dyn base6("x", "y", "number");
      goto L0(r28);
    };
    p5 = prom<V +>{
      sym7 = ldf names;
      base7 = ldf names in base;
      guard7 = `==`.4(sym7, base7);
      if guard7 then L1() else L2();
    L0(r33):
      return r33;
    L1():
      x3 = ld x;
      x4 = force? x3;
      checkMissing(x4);
      names = ldf names in base;
      r34 = dyn names(x4);
      goto L0(r34);
    L2():
      r32 = dyn base7(<sym x>);
      goto L0(r32);
    };
    r36 = dyn _in_(p4, p5);
    check L110() else D7();
  L114():
    x5 = ld x;
    check L115() else D10();
  D7():
    deopt 34 [c2, r36];
  D10():
    deopt 41 [x5];
  D12():
    deopt 48 [];
  D14():
    deopt 56 [add1];
  L110():
    all = ldf all in base;
    r37 = dyn all(r36);
    check L111() else D8();
  L115():
    x6 = force? x5;
    checkMissing(x6);
    c13 = `is.object`(x6);
    if c13 then L117() else L118(x6);
  L122():
    p6 = prom<V +>{
      x12 = ld x;
      x13 = force? x12;
      checkMissing(x13);
      return x13;
    };
    p7 = prom<V +>{
      y1 = ld y;
      y2 = force? y1;
      checkMissing(y2);
      return y2;
    };
    p8 = prom<V +>{
      xlabel = ld xlabel;
      xlabel1 = force? xlabel;
      checkMissing(xlabel1);
      return xlabel1;
    };
    p9 = prom<V +>{
      ylabel = ld ylabel;
      ylabel1 = force? ylabel;
      checkMissing(ylabel1);
      return ylabel1;
    };
    p10 = prom<V +>{
      log1 = ld log;
      log2 = force? log1;
      checkMissing(log2);
      return log2;
    };
    r44 = dyn xy_coords(p6, p7, p8, p9, p10);
    check L123() else D13();
  L124():
    add2 = force? add1;
    checkMissing(add2);
    r45 = `!`(add2);
    c14 = `as.logical`(r45);
    if c14 then L125() else L30();
  D8():
    deopt 36 [c2, r37];
  D13():
    deopt 54 [r44];
  L30():
    goto L49();
  L49():
    sym16 = ldf length;
    base16 = ldf length in base;
    guard16 = `==`.4(sym16, base16);
    if guard16 then L195() else L196();
  L111():
    goto L27(c2, r37);
  L116(dx1):
    st number = dx1;
    x9 = ld x;
    check L120() else D11();
  L117():
    dr = tryDispatchBuiltin.1("$", x6);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L119() else L118(dr);
  L118(x8):
    r38 = `$`(x8, <sym number>);
    goto L116(r38);
  L123():
    goto L29(r44);
  L125():
    sym8 = ldf `is.null`;
    base8 = ldf `is.null` in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L126() else L127();
  D11():
    deopt 45 [x9];
  L31(r47):
    c16 = `as.logical`(r47);
    if c16 then L129() else L32();
  L50(r78):
    st n = r78;
    sym17 = ldf missing;
    base17 = ldf missing in base;
    guard17 = `==`.4(sym17, base17);
    if guard17 then L203() else L204();
  L119():
    dx = getTryDispatchBuiltinValue(dr);
    goto L116(dx);
  L120():
    x10 = force? x9;
    checkMissing(x10);
    goto L29(x10);
  L126():
    xlab1 = ld xlab;
    check L128() else D15();
  L127():
    r46 = dyn base8(<sym xlab>);
    goto L31(r46);
  L195():
    xy24 = ld xy;
    check L197() else D29();
  L196():
    r77 = dyn base16(<lang `$`(xy, x)>);
    goto L50(r77);
  D15():
    deopt 60 [xlab1];
  D29():
    deopt 127 [xy24];
  L32():
    goto L33();
  L33():
    sym9 = ldf `is.null`;
    base9 = ldf `is.null` in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L136() else L137();
  L51(r82):
    c32 = `as.logical`(r82);
    if c32 then L205() else L52();
  L128():
    xlab2 = force? xlab1;
    checkMissing(xlab2);
    c15 = `==`(xlab2, NULL);
    goto L31(c15);
  L129():
    xy = ld xy;
    check L130() else D16();
  L197():
    xy25 = force? xy24;
    checkMissing(xy25);
    c31 = `is.object`(xy25);
    if c31 then L199() else L200(xy25);
  L203():
    missing2 = ldf missing in base;
    r83 = dyn missing2(<sym number>);
    goto L51(r83);
  L204():
    r81 = dyn base17(<sym number>);
    goto L51(r81);
  D16():
    deopt 63 [xy];
  L34(r50):
    c19 = `as.logical`(r50);
    if c19 then L139() else L35();
  L52():
    sym18 = ldf length;
    base18 = ldf length in base;
    guard18 = `==`.4(sym18, base18);
    if guard18 then L224() else L225();
  L53():
    sym19 = ldf length;
    base19 = ldf length in base;
    guard19 = `==`.4(sym19, base19);
    if guard19 then L257() else L258();
  L130():
    xy1 = force? xy;
    checkMissing(xy1);
    c17 = `is.object`(xy1);
    if c17 then L132() else L133(xy1);
  L136():
    ylab1 = ld ylab;
    check L138() else D17();
  L137():
    r49 = dyn base9(<sym ylab>);
    goto L34(r49);
  L198(dx39):
    length = ldf length in base;
    r80 = dyn length(dx39);
    check L202() else D30();
  L199():
    dr18 = tryDispatchBuiltin.1("$", xy25);
    dc9 = getTryDispatchBuiltinDispatched(dr18);
    if dc9 then L201() else L200(dr18);
  L200(xy27):
    r79 = `$`(xy27, <sym x>);
    goto L198(r79);
  L205():
    xyTable = ldf xyTable;
    check L206() else D31();
  D17():
    deopt 70 [ylab1];
  D30():
    deopt 131 [r80];
  D31():
    deopt 137 [];
  L35():
    goto L36();
  L36():
    sym10 = ldf `is.null`;
    base10 = ldf `is.null` in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L146() else L147();
  L54(r91):
    n = ld n;
    check L228() else D38();
  L60(r103):
    st n = r103;
    dev_hold = ldf `dev.hold`;
    check L261() else D50();
  L131(dx3):
    st xlab = dx3;
    goto L33();
  L132():
    dr2 = tryDispatchBuiltin.1("$", xy1);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L134() else L133(dr2);
  L133(xy3):
    r48 = `$`(xy3, <sym xlab>);
    goto L131(r48);
  L138():
    ylab2 = force? ylab1;
    checkMissing(ylab2);
    c18 = `==`(ylab2, NULL);
    goto L34(c18);
  L139():
    xy4 = ld xy;
    check L140() else D18();
  L201():
    dx38 = getTryDispatchBuiltinValue(dr18);
    goto L198(dx38);
  L202():
    goto L50(r80);
  L206():
    p11 = prom<V +>{
      xy28 = ld xy;
      xy29 = force? xy28;
      checkMissing(xy29);
      return xy29;
    };
    p12 = prom<V +>{
      digits1 = ld digits;
      digits2 = force? digits1;
      checkMissing(digits2);
      return digits2;
    };
    r86 = dyn xyTable[, digits](p11, p12);
    check L207() else D32();
  L224():
    number1 = ld number;
    check L226() else D36();
  L225():
    r90 = dyn base18(<sym number>);
    goto L54(r90);
  L257():
    x14 = ld x;
    check L259() else D48();
  L258():
    r102 = dyn base19(<sym x>);
    goto L60(r102);
  D18():
    deopt 73 [xy4];
  D32():
    deopt 141 [r86];
  D36():
    deopt 157 [number1];
  D38():
    deopt 160 [r91, n];
  D48():
    deopt 196 [x14];
  D50():
    deopt 202 [];
  L37(r53):
    c22 = `as.logical`(r53);
    if c22 then L149() else L38();
  L134():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L131(dx2);
  L140():
    xy5 = force? xy4;
    checkMissing(xy5);
    c20 = `is.object`(xy5);
    if c20 then L142() else L143(xy5);
  L146():
    xlim1 = ld xlim;
    check L148() else D19();
  L147():
    r52 = dyn base10(<sym xlim>);
    goto L37(r52);
  L207():
    st tt = r86;
    tt = ld tt;
    check L208() else D33();
  L226():
    number2 = force? number1;
    checkMissing(number2);
    length1 = ldf length in base;
    r92 = dyn length1(number2);
    check L227() else D37();
  L228():
    n1 = force? n;
    checkMissing(n1);
    r93 = `!=`(r91, n1);
    c36 = `as.logical`(r93);
    if c36 then L229() else L55();
  L259():
    x15 = force? x14;
    checkMissing(x15);
    length2 = ldf length in base;
    r104 = dyn length2(x15);
    check L260() else D49();
  L261():
    r105 = dyn dev_hold();
    check L262() else D51();
  D19():
    deopt 80 [xlim1];
  D33():
    deopt 143 [tt];
  D37():
    deopt 160 [r92];
  D49():
    deopt 199 [r104];
  D51():
    deopt 203 [r105];
  L38():
    goto L42();
  L42():
    sym13 = ldf `is.null`;
    base13 = ldf `is.null` in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L170() else L171();
  L55():
    goto L56();
  L56():
    number3 = ld number;
    check L233() else D41();
  L141(dx6):
    st ylab = dx6;
    goto L36();
  L142():
    dr4 = tryDispatchBuiltin.1("$", xy5);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L144() else L143(dr4);
  L143(xy7):
    r51 = `$`(xy7, <sym ylab>);
    goto L141(r51);
  L148():
    xlim2 = force? xlim1;
    checkMissing(xlim2);
    c21 = `==`(xlim2, NULL);
    goto L37(c21);
  L149():
    sym11 = ldf range;
    base11 = ldf range in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L150() else L151();
  L208():
    tt1 = force? tt;
    checkMissing(tt1);
    c33 = `is.object`(tt1);
    if c33 then L210() else L211(tt1);
  L227():
    goto L54(r92);
  L229():
    stop = ldf stop;
    check L230() else D39();
  L260():
    goto L60(r104);
  L262():
    sym20 = ldf `on.exit`;
    base20 = ldf `on.exit` in base;
    guard20 = `==`.4(sym20, base20);
    if guard20 then L263() else L264();
  D39():
    deopt 164 [];
  D41():
    deopt 169 [number3];
  L39(r55):
    st xlim = r55;
    goto L42();
  L43(r65):
    c27 = `as.logical`(r65);
    if c27 then L173() else L44();
  L61():
    add3 = ld add;
    check L265() else D52();
  L144():
    dx5 = getTryDispatchBuiltinValue(dr4);
    goto L141(dx5);
  L150():
    xy8 = ld xy;
    check L152() else D20();
  L151():
    r54 = dyn base11(<lang `[`(`$`(xy, x), is.finite(`$`(xy, x)))>);
    goto L39(r54);
  L170():
    ylim1 = ld ylim;
    check L172() else D24();
  L171():
    r64 = dyn base13(<sym ylim>);
    goto L43(r64);
  L209(dx41):
    st x = dx41;
    tt4 = ld tt;
    check L213() else D34();
  L210():
    dr20 = tryDispatchBuiltin.1("$", tt1);
    dc10 = getTryDispatchBuiltinDispatched(dr20);
    if dc10 then L212() else L211(dr20);
  L211(tt3):
    r87 = `$`(tt3, <sym x>);
    goto L209(r87);
  L230():
    r94 = dyn stop("'number' must have same length as 'x' and 'y'");
    check L231() else D40();
  L233():
    number4 = force? number3;
    checkMissing(number4);
    r96 = `>`(number4, 0.0);
    st np = r96;
    xy30 = ld xy;
    check L234() else D42();
  L263():
    on_exit = ldf `on.exit` in base;
    r108 = dyn on_exit(<lang dev.flush()>);
    goto L61();
  L264():
    r106 = dyn base20(<lang dev.flush()>);
    goto L61();
  D20():
    deopt 85 [xy8];
  D24():
    deopt 102 [ylim1];
  D34():
    deopt 147 [tt4];
  D40():
    deopt 166 [r94];
  D42():
    deopt 174 [xy30];
  D52():
    deopt 207 [add3];
  L44():
    goto L48(NULL);
  L48(r75):
    goto L49();
  L152():
    xy9 = force? xy8;
    checkMissing(xy9);
    c23 = `is.object`(xy9);
    if c23 then L154() else L155(xy9);
  L172():
    ylim2 = force? ylim1;
    checkMissing(ylim2);
    c26 = `==`(ylim2, NULL);
    goto L43(c26);
  L173():
    sym14 = ldf range;
    base14 = ldf range in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L174() else L175();
  L212():
    dx40 = getTryDispatchBuiltinValue(dr20);
    goto L209(dx40);
  L213():
    tt5 = force? tt4;
    checkMissing(tt5);
    c34 = `is.object`(tt5);
    if c34 then L215() else L216(tt5);
  L231():
    goto L56();
  L234():
    xy31 = force? xy30;
    checkMissing(xy31);
    c37 = `is.object`(xy31);
    if c37 then L236() else L237(xy31);
  L265():
    add4 = force? add3;
    checkMissing(add4);
    r109 = `!`(add4);
    c42 = `as.logical`(r109);
    if c42 then L266() else L62();
  L45(r67):
    st ylim = r67;
    goto L48(r67);
  L62():
    goto L63();
  L63():
    number9 = ld number;
    check L270() else D55();
  L153(dx9):
    c24 = `is.object`(dx9);
    if c24 then L157() else L158(dx9);
  L154():
    dr6 = tryDispatchBuiltin.1("$", xy9);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L156() else L155(dr6);
  L155(xy11):
    r56 = `$`(xy11, <sym x>);
    goto L153(r56);
  L174():
    xy16 = ld xy;
    check L176() else D25();
  L175():
    r66 = dyn base14(<lang `[`(`$`(xy, y), is.finite(`$`(xy, y)))>);
    goto L45(r66);
  L214(dx43):
    st y = dx43;
    tt8 = ld tt;
    check L218() else D35();
  L215():
    dr22 = tryDispatchBuiltin.1("$", tt5);
    dc11 = getTryDispatchBuiltinDispatched(dr22);
    if dc11 then L217() else L216(dr22);
  L216(tt7):
    r88 = `$`(tt7, <sym y>);
    goto L214(r88);
  L235(dx48):
    c38 = `is.object`(dx48);
    if c38 then L239() else L240(dx48);
  L236():
    dr26 = tryDispatchBuiltin.1("$", xy31);
    dc13 = getTryDispatchBuiltinDispatched(dr26);
    if dc13 then L238() else L237(dr26);
  L237(xy33):
    r97 = `$`(xy33, <sym x>);
    goto L235(r97);
  L266():
    plot = ldf plot;
    check L267() else D53();
  D25():
    deopt 107 [xy16];
  D35():
    deopt 151 [tt8];
  D53():
    deopt 211 [];
  D55():
    deopt 230 [number9];
  L40(dx13):
    range = ldf range in base;
    r62 = dyn range(dx13);
    check L168() else D23();
  L57(dx52):
    st x = dx52;
    xy34 = ld xy;
    check L243() else D44();
  L156():
    dx8 = getTryDispatchBuiltinValue(dr6);
    goto L153(dx8);
  L157():
    dr8 = tryDispatchBuiltin.1("[", dx9);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L159() else L158(dr8);
  L158(dx11):
    sym12 = ldf `is.finite`;
    base12 = ldf `is.finite` in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L160() else L161();
  L176():
    xy17 = force? xy16;
    checkMissing(xy17);
    c28 = `is.object`(xy17);
    if c28 then L178() else L179(xy17);
  L217():
    dx42 = getTryDispatchBuiltinValue(dr22);
    goto L214(dx42);
  L218():
    tt9 = force? tt8;
    checkMissing(tt9);
    c35 = `is.object`(tt9);
    if c35 then L220() else L221(tt9);
  L238():
    dx47 = getTryDispatchBuiltinValue(dr26);
    goto L235(dx47);
  L239():
    dr28 = tryDispatchBuiltin.1("[", dx48);
    dc14 = getTryDispatchBuiltinDispatched(dr28);
    if dc14 then L241() else L240(dr28);
  L240(dx50):
    np = ld np;
    check L242() else D43();
  L267():
    p13 = prom<V +>{
      x16 = ld x;
      x17 = force? x16;
      checkMissing(x17);
      return x17;
    };
    p14 = prom<V +>{
      y3 = ld y;
      y4 = force? y3;
      checkMissing(y4);
      return y4;
    };
    p15 = prom<V +>{
      xlab3 = ld xlab;
      xlab4 = force? xlab3;
      checkMissing(xlab4);
      return xlab4;
    };
    p16 = prom<V +>{
      ylab3 = ld ylab;
      ylab4 = force? ylab3;
      checkMissing(ylab4);
      return ylab4;
    };
    p17 = prom<V +>{
      xlim3 = ld xlim;
      xlim4 = force? xlim3;
      checkMissing(xlim4);
      return xlim4;
    };
    p18 = prom<V +>{
      ylim3 = ld ylim;
      ylim4 = force? ylim3;
      checkMissing(ylim4);
      return ylim4;
    };
    p19 = prom<V +>{
      log3 = ld log;
      log4 = force? log3;
      checkMissing(log4);
      return log4;
    };
    ddd1 = ld `...`;
    r117 = dyn plot[, , xlab, ylab, xlim, ylim, log, type, `...`](p13, p14, p15, p16, p17, p18, p19, "n", ddd1);
    check L268() else D54();
  L270():
    number10 = force? number9;
    checkMissing(number10);
    r119 = `==`(number10, 1.0);
    st `n.is1` = r119;
    sym21 = ldf any;
    base21 = ldf any in base;
    guard21 = `==`.4(sym21, base21);
    if guard21 then L271() else L272();
  D23():
    deopt 97 [r62];
  D43():
    deopt 177 [dx50, np];
  D44():
    deopt 181 [xy34];
  D54():
    deopt 227 [r117];
  L41(dx16, r58):
    __ = ldf `[` in base;
    r61 = dyn __(dx16, r58);
    goto L40(r61);
  L64(r121):
    c43 = `as.logical`(r121);
    if c43 then L275() else L65();
  L159():
    dx12 = getTryDispatchBuiltinValue(dr8);
    goto L40(dx12);
  L160():
    xy12 = ld xy;
    check L162() else D21();
  L161():
    r57 = dyn base12(<lang `$`(xy, x)>);
    goto L41(dx11, r57);
  L168():
    goto L39(r62);
  L177(dx24):
    c29 = `is.object`(dx24);
    if c29 then L181() else L182(dx24);
  L178():
    dr12 = tryDispatchBuiltin.1("$", xy17);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L180() else L179(dr12);
  L179(xy19):
    r68 = `$`(xy19, <sym y>);
    goto L177(r68);
  L219(dx45):
    st number = dx45;
    goto L53();
  L220():
    dr24 = tryDispatchBuiltin.1("$", tt9);
    dc12 = getTryDispatchBuiltinDispatched(dr24);
    if dc12 then L222() else L221(dr24);
  L221(tt11):
    r89 = `$`(tt11, <sym number>);
    goto L219(r89);
  L241():
    dx51 = getTryDispatchBuiltinValue(dr28);
    goto L57(dx51);
  L242():
    np1 = force? np;
    __2 = ldf `[` in base;
    r98 = dyn __2(dx50, np1);
    goto L57(r98);
  L243():
    xy35 = force? xy34;
    checkMissing(xy35);
    c39 = `is.object`(xy35);
    if c39 then L245() else L246(xy35);
  L268():
    goto L63();
  L271():
    n_is1 = ld `n.is1`;
    check L273() else D56();
  L272():
    r120 = dyn base21(<sym n.is1>);
    goto L64(r120);
  D21():
    deopt 90 [dx11, xy12];
  D56():
    deopt 237 [n_is1];
  L46(dx28):
    range1 = ldf range in base;
    r74 = dyn range1(dx28);
    check L192() else D28();
  L65():
    goto L66();
  L66():
    sym22 = ldf any;
    base22 = ldf any in base;
    guard22 = `==`.4(sym22, base22);
    if guard22 then L279() else L280();
  L162():
    xy13 = force? xy12;
    checkMissing(xy13);
    c25 = `is.object`(xy13);
    if c25 then L164() else L165(dx11, xy13);
  L180():
    dx23 = getTryDispatchBuiltinValue(dr12);
    goto L177(dx23);
  L181():
    dr14 = tryDispatchBuiltin.1("[", dx24);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L183() else L182(dr14);
  L182(dx26):
    sym15 = ldf `is.finite`;
    base15 = ldf `is.finite` in base;
    guard15 = `==`.4(sym15, base15);
    if guard15 then L184() else L185();
  L222():
    dx44 = getTryDispatchBuiltinValue(dr24);
    goto L219(dx44);
  L244(dx54):
    c40 = `is.object`(dx54);
    if c40 then L248() else L249(dx54);
  L245():
    dr30 = tryDispatchBuiltin.1("$", xy35);
    dc15 = getTryDispatchBuiltinDispatched(dr30);
    if dc15 then L247() else L246(dr30);
  L246(xy37):
    r99 = `$`(xy37, <sym y>);
    goto L244(r99);
  L273():
    n_is2 = force? n_is1;
    checkMissing(n_is2);
    any = ldf any in base;
    r122 = dyn any(n_is2);
    check L274() else D57();
  L275():
    points = ldf points;
    check L276() else D58();
  D28():
    deopt 119 [r74];
  D57():
    deopt 240 [r122];
  D58():
    deopt 242 [];
  L47(dx31, r70):
    __1 = ldf `[` in base;
    r73 = dyn __1(dx31, r70);
    goto L46(r73);
  L58(dx58):
    st y = dx58;
    number5 = ld number;
    check L252() else D46();
  L67(r134):
    c46 = `as.logical`(r134);
    if c46 then L283() else L68();
  L163(dx21, dx22):
    is_finite = ldf `is.finite` in base;
    r60 = dyn is_finite(dx22);
    check L167() else D22();
  L164():
    dr10 = tryDispatchBuiltin.1("$", xy13);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L166() else L165(dx11, dr10);
  L165(dx18, xy15):
    r59 = `$`(xy15, <sym x>);
    goto L163(dx18, r59);
  L183():
    dx27 = getTryDispatchBuiltinValue(dr14);
    goto L46(dx27);
  L184():
    xy20 = ld xy;
    check L186() else D26();
  L185():
    r69 = dyn base15(<lang `$`(xy, y)>);
    goto L47(dx26, r69);
  L192():
    goto L45(r74);
  L247():
    dx53 = getTryDispatchBuiltinValue(dr30);
    goto L244(dx53);
  L248():
    dr32 = tryDispatchBuiltin.1("[", dx54);
    dc16 = getTryDispatchBuiltinDispatched(dr32);
    if dc16 then L250() else L249(dr32);
  L249(dx56):
    np2 = ld np;
    check L251() else D45();
  L274():
    goto L64(r122);
  L276():
    p20 = prom<V +>{
      x18 = ld x;
      x19 = force? x18;
      checkMissing(x19);
      c44 = `is.object`(x19);
      if c44 then L1() else L2(x19);
    L0(dx62):
      return dx62;
    L1():
      dr36 = tryDispatchBuiltin.1("[", x19);
      dc18 = getTryDispatchBuiltinDispatched(dr36);
      if dc18 then L3() else L2(dr36);
    L2(x21):
      n_is3 = ld `n.is1`;
      n_is4 = force? n_is3;
      __5 = ldf `[` in base;
      r123 = dyn __5(x21, n_is4);
      goto L0(r123);
    L3():
      dx61 = getTryDispatchBuiltinValue(dr36);
      goto L0(dx61);
    };
    p21 = prom<V +>{
      y5 = ld y;
      y6 = force? y5;
      checkMissing(y6);
      c45 = `is.object`(y6);
      if c45 then L1() else L2(y6);
    L0(dx64):
      return dx64;
    L1():
      dr38 = tryDispatchBuiltin.1("[", y6);
      dc19 = getTryDispatchBuiltinDispatched(dr38);
      if dc19 then L3() else L2(dr38);
    L2(y8):
      n_is5 = ld `n.is1`;
      n_is6 = force? n_is5;
      __6 = ldf `[` in base;
      r125 = dyn __6(y8, n_is6);
      goto L0(r125);
    L3():
      dx63 = getTryDispatchBuiltinValue(dr38);
      goto L0(dx63);
    };
    p22 = prom<V +>{
      pch1 = ld pch;
      pch2 = force? pch1;
      checkMissing(pch2);
      return pch2;
    };
    p23 = prom<V +>{
      col1 = ld col;
      col2 = force? col1;
      checkMissing(col2);
      return col2;
    };
    p24 = prom<V +>{
      bg1 = ld bg;
      bg2 = force? bg1;
      checkMissing(bg2);
      return bg2;
    };
    p25 = prom<V +>{
      cex1 = ld cex;
      cex2 = force? cex1;
      checkMissing(cex2);
      return cex2;
    };
    r131 = dyn points[, , pch, col, bg, cex](p20, p21, p22, p23, p24, p25);
    check L277() else D59();
  L279():
    n_is7 = ld `n.is1`;
    check L281() else D60();
  L280():
    r133 = dyn base22(<lang `!`(n.is1)>);
    goto L67(r133);
  D22():
    deopt 94 [dx21, r60];
  D26():
    deopt 112 [dx26, xy20];
  D45():
    deopt 184 [dx56, np2];
  D46():
    deopt 188 [number5];
  D59():
    deopt 253 [r131];
  D60():
    deopt 258 [n_is7];
  L68():
    goto L87();
  L87():
    sym29 = ldf invisible;
    base29 = ldf invisible in base;
    guard29 = `==`.4(sym29, base29);
    if guard29 then L364() else L365();
  L166():
    dx20 = getTryDispatchBuiltinValue(dr10);
    goto L163(dx11, dx20);
  L167():
    goto L41(dx21, r60);
  L186():
    xy21 = force? xy20;
    checkMissing(xy21);
    c30 = `is.object`(xy21);
    if c30 then L188() else L189(dx26, xy21);
  L250():
    dx57 = getTryDispatchBuiltinValue(dr32);
    goto L58(dx57);
  L251():
    np3 = force? np2;
    __3 = ldf `[` in base;
    r100 = dyn __3(dx56, np3);
    goto L58(r100);
  L252():
    number6 = force? number5;
    checkMissing(number6);
    c41 = `is.object`(number6);
    if c41 then L253() else L254(number6);
  L277():
    goto L66();
  L281():
    n_is8 = force? n_is7;
    checkMissing(n_is8);
    r135 = `!`(n_is8);
    any1 = ldf any in base;
    r136 = dyn any1(r135);
    check L282() else D61();
  L283():
    points1 = ldf points;
    check L284() else D62();
  D61():
    deopt 262 [r136];
  D62():
    deopt 264 [];
  L59(dx60):
    st number = dx60;
    goto L53();
  L88(r235):
    popenv;
    return r235;
  L187(dx36, dx37):
    is_finite1 = ldf `is.finite` in base;
    r72 = dyn is_finite1(dx37);
    check L191() else D27();
  L188():
    dr16 = tryDispatchBuiltin.1("$", xy21);
    dc8 = getTryDispatchBuiltinDispatched(dr16);
    if dc8 then L190() else L189(dx26, dr16);
  L189(dx33, xy23):
    r71 = `$`(xy23, <sym y>);
    goto L187(dx33, r71);
  L253():
    dr34 = tryDispatchBuiltin.1("[", number6);
    dc17 = getTryDispatchBuiltinDispatched(dr34);
    if dc17 then L255() else L254(dr34);
  L254(number8):
    np4 = ld np;
    check L256() else D47();
  L282():
    goto L67(r136);
  L284():
    p26 = prom<V +>{
      x22 = ld x;
      x23 = force? x22;
      checkMissing(x23);
      c47 = `is.object`(x23);
      if c47 then L1() else L2(x23);
    L0(dx66):
      return dx66;
    L1():
      dr40 = tryDispatchBuiltin.1("[", x23);
      dc20 = getTryDispatchBuiltinDispatched(dr40);
      if dc20 then L3() else L2(dr40);
    L2(x25):
      n_is9 = ld `n.is1`;
      n_is10 = force? n_is9;
      checkMissing(n_is10);
      r137 = `!`(n_is10);
      __7 = ldf `[` in base;
      r138 = dyn __7(x25, r137);
      goto L0(r138);
    L3():
      dx65 = getTryDispatchBuiltinValue(dr40);
      goto L0(dx65);
    };
    p27 = prom<V +>{
      y9 = ld y;
      y10 = force? y9;
      checkMissing(y10);
      c48 = `is.object`(y10);
      if c48 then L1() else L2(y10);
    L0(dx68):
      return dx68;
    L1():
      dr42 = tryDispatchBuiltin.1("[", y10);
      dc21 = getTryDispatchBuiltinDispatched(dr42);
      if dc21 then L3() else L2(dr42);
    L2(y12):
      n_is11 = ld `n.is1`;
      n_is12 = force? n_is11;
      checkMissing(n_is12);
      r140 = `!`(n_is12);
      __8 = ldf `[` in base;
      r141 = dyn __8(y12, r140);
      goto L0(r141);
    L3():
      dx67 = getTryDispatchBuiltinValue(dr42);
      goto L0(dx67);
    };
    p28 = prom<V +>{
      pch3 = ld pch;
      pch4 = force? pch3;
      checkMissing(pch4);
      return pch4;
    };
    p29 = prom<V +>{
      col3 = ld col;
      col4 = force? col3;
      checkMissing(col4);
      return col4;
    };
    p30 = prom<V +>{
      bg3 = ld bg;
      bg4 = force? bg3;
      checkMissing(bg4);
      return bg4;
    };
    p31 = prom<V +>{
      cex3 = ld cex;
      cex4 = force? cex3;
      checkMissing(cex4);
      cex_fact1 = ld `cex.fact`;
      cex_fact2 = force? cex_fact1;
      checkMissing(cex_fact2);
      r146 = `/`(cex4, cex_fact2);
      return r146;
    };
    r148 = dyn points1[, , pch, col, bg, cex](p26, p27, p28, p29, p30, p31);
    check L285() else D63();
  L364():
    sym30 = ldf list;
    base30 = ldf list in base;
    guard30 = `==`.4(sym30, base30);
    if guard30 then L366() else L367();
  L365():
    r234 = dyn base29(<lang list(x=x, y=y, number=number)>);
    goto L88(r234);
  D27():
    deopt 116 [dx36, r72];
  D47():
    deopt 190 [number8, np4];
  D63():
    deopt 275 [r148];
  L89(r237):
    invisible = ldf invisible in base;
    r239 = dyn invisible(r237);
    check L372() else D104();
  L190():
    dx35 = getTryDispatchBuiltinValue(dr16);
    goto L187(dx26, dx35);
  L191():
    goto L47(dx36, r72);
  L255():
    dx59 = getTryDispatchBuiltinValue(dr34);
    goto L59(dx59);
  L256():
    np5 = force? np4;
    __4 = ldf `[` in base;
    r101 = dyn __4(number8, np5);
    goto L59(r101);
  L285():
    n2 = ld n;
    check L286() else D64();
  L366():
    x35 = ld x;
    check L368() else D100();
  L367():
    r236 = dyn base30[x, y, number](<sym x>, <sym y>, <sym number>);
    goto L89(r236);
  D64():
    deopt 277 [1, n2];
  D100():
    deopt 416 [x35];
  D104():
    deopt 428 [r239];
  L286():
    n3 = force? n2;
    checkMissing(n3);
    r149 = `:`(1, n3);
    c49 = `is.object`(r149);
    if c49 then L287() else L288(r149);
  L368():
    x36 = force? x35;
    checkMissing(x36);
    y21 = ld y;
    check L369() else D101();
  L372():
    goto L88(r239);
  D101():
    deopt 419 [y21];
  L69(dx70):
    st `i.multi` = dx70;
    par1 = ldf par;
    check L291() else D66();
  L287():
    dr44 = tryDispatchBuiltin.1("[", r149);
    dc22 = getTryDispatchBuiltinDispatched(dr44);
    if dc22 then L289() else L288(dr44);
  L288(r151):
    number11 = ld number;
    check L290() else D65();
  L369():
    y22 = force? y21;
    checkMissing(y22);
    number27 = ld number;
    check L370() else D102();
  D65():
    deopt 280 [r151, number11];
  D66():
    deopt 287 [];
  D102():
    deopt 422 [number27];
  L289():
    dx69 = getTryDispatchBuiltinValue(dr44);
    goto L69(dx69);
  L290():
    number12 = force? number11;
    checkMissing(number12);
    r152 = `>`(number12, 1.0);
    __9 = ldf `[` in base;
    r153 = dyn __9(r151, r152);
    goto L69(r153);
  L291():
    r154 = dyn par1("pin");
    check L292() else D67();
  L370():
    number28 = force? number27;
    checkMissing(number28);
    list = ldf list in base;
    r238 = dyn list(x36, y22, number28);
    check L371() else D103();
  D67():
    deopt 289 [r154];
  D103():
    deopt 426 [r238];
  L292():
    st ppin = r154;
    par2 = ldf par;
    check L293() else D68();
  L371():
    goto L89(r238);
  D68():
    deopt 292 [];
  L293():
    r155 = dyn par2("usr");
    check L294() else D69();
  D69():
    deopt 294 [r155];
  L294():
    st pusr = r155;
    size1 = ld size;
    check L295() else D70();
  D70():
    deopt 296 [size1];
  L295():
    size2 = force? size1;
    checkMissing(size2);
    sym23 = ldf abs;
    base23 = ldf abs in base;
    guard23 = `==`.4(sym23, base23);
    if guard23 then L296() else L297();
  L70(size5, r157):
    r162 = `*`(size5, r157);
    ppin = ld ppin;
    check L307() else D74();
  L296():
    pusr = ld pusr;
    check L298() else D71();
  L297():
    r156 = dyn base23(<lang `-`(`[`(pusr, 2), `[`(pusr, 1))>);
    goto L70(size2, r156);
  D71():
    deopt 299 [size2, pusr];
  D74():
    deopt 311 [r162, ppin];
  L298():
    pusr1 = force? pusr;
    checkMissing(pusr1);
    c50 = `is.object`(pusr1);
    if c50 then L299() else L300(size2, pusr1);
  L307():
    ppin1 = force? ppin;
    checkMissing(ppin1);
    c52 = `is.object`(ppin1);
    if c52 then L308() else L309(r162, ppin1);
  L71(size9, dx72):
    pusr4 = ld pusr;
    check L302() else D72();
  L73(r166, dx80):
    r168 = `/`(r166, dx80);
    st xr = r168;
    size14 = ld size;
    check L311() else D75();
  L299():
    dr46 = tryDispatchBuiltin.1("[", pusr1);
    dc23 = getTryDispatchBuiltinDispatched(dr46);
    if dc23 then L301() else L300(size2, dr46);
  L300(size7, pusr3):
    __10 = ldf `[` in base;
    r158 = dyn __10(pusr3, 2);
    goto L71(size7, r158);
  L308():
    dr50 = tryDispatchBuiltin.1("[", ppin1);
    dc25 = getTryDispatchBuiltinDispatched(dr50);
    if dc25 then L310() else L309(r162, dr50);
  L309(r164, ppin3):
    __12 = ldf `[` in base;
    r167 = dyn __12(ppin3, 1);
    goto L73(r164, r167);
  D72():
    deopt 303 [size9, dx72, pusr4];
  D75():
    deopt 318 [size14];
  L301():
    dx71 = getTryDispatchBuiltinValue(dr46);
    goto L71(size2, dx71);
  L302():
    pusr5 = force? pusr4;
    checkMissing(pusr5);
    c51 = `is.object`(pusr5);
    if c51 then L303() else L304(size9, dx72, pusr5);
  L310():
    dx79 = getTryDispatchBuiltinValue(dr50);
    goto L73(r162, dx79);
  L311():
    size15 = force? size14;
    checkMissing(size15);
    sym24 = ldf abs;
    base24 = ldf abs in base;
    guard24 = `==`.4(sym24, base24);
    if guard24 then L312() else L313();
  L72(size13, dx77, dx78):
    r160 = `-`(dx77, dx78);
    abs = ldf abs in base;
    r161 = dyn abs(r160);
    check L306() else D73();
  L74(size18, r170):
    r175 = `*`(size18, r170);
    ppin4 = ld ppin;
    check L323() else D79();
  L303():
    dr48 = tryDispatchBuiltin.1("[", pusr5);
    dc24 = getTryDispatchBuiltinDispatched(dr48);
    if dc24 then L305() else L304(size9, dx72, dr48);
  L304(size11, dx74, pusr7):
    __11 = ldf `[` in base;
    r159 = dyn __11(pusr7, 1);
    goto L72(size11, dx74, r159);
  L312():
    pusr8 = ld pusr;
    check L314() else D76();
  L313():
    r169 = dyn base24(<lang `-`(`[`(pusr, 4), `[`(pusr, 3))>);
    goto L74(size15, r169);
  D73():
    deopt 310 [size13, r161];
  D76():
    deopt 321 [size15, pusr8];
  D79():
    deopt 333 [r175, ppin4];
  L305():
    dx76 = getTryDispatchBuiltinValue(dr48);
    goto L72(size9, dx72, dx76);
  L306():
    goto L70(size13, r161);
  L314():
    pusr9 = force? pusr8;
    checkMissing(pusr9);
    c53 = `is.object`(pusr9);
    if c53 then L315() else L316(size15, pusr9);
  L323():
    ppin5 = force? ppin4;
    checkMissing(ppin5);
    c55 = `is.object`(ppin5);
    if c55 then L324() else L325(r175, ppin5);
  L75(size22, dx82):
    pusr12 = ld pusr;
    check L318() else D77();
  L77(r179, dx90):
    r181 = `/`(r179, dx90);
    st yr = r181;
    sym25 = ldf `rep.int`;
    base25 = ldf `rep.int` in base;
    guard25 = `==`.4(sym25, base25);
    if guard25 then L327() else L328();
  L315():
    dr52 = tryDispatchBuiltin.1("[", pusr9);
    dc26 = getTryDispatchBuiltinDispatched(dr52);
    if dc26 then L317() else L316(size15, dr52);
  L316(size20, pusr11):
    __13 = ldf `[` in base;
    r171 = dyn __13(pusr11, 4);
    goto L75(size20, r171);
  L324():
    dr56 = tryDispatchBuiltin.1("[", ppin5);
    dc28 = getTryDispatchBuiltinDispatched(dr56);
    if dc28 then L326() else L325(r175, dr56);
  L325(r177, ppin7):
    __15 = ldf `[` in base;
    r180 = dyn __15(ppin7, 2);
    goto L77(r177, r180);
  D77():
    deopt 325 [size22, dx82, pusr12];
  L78(r183):
    st `i.rep` = r183;
    numeric = ldf numeric;
    check L336() else D84();
  L317():
    dx81 = getTryDispatchBuiltinValue(dr52);
    goto L75(size15, dx81);
  L318():
    pusr13 = force? pusr12;
    checkMissing(pusr13);
    c54 = `is.object`(pusr13);
    if c54 then L319() else L320(size22, dx82, pusr13);
  L326():
    dx89 = getTryDispatchBuiltinValue(dr56);
    goto L77(r175, dx89);
  L327():
    i_multi = ld `i.multi`;
    check L329() else D80();
  L328():
    r182 = dyn base25(<sym i.multi>, <lang `[`(number, `>`(number, 1.0))>);
    goto L78(r182);
  D80():
    deopt 342 [i_multi];
  D84():
    deopt 355 [];
  L76(size26, dx87, dx88):
    r173 = `-`(dx87, dx88);
    abs1 = ldf abs in base;
    r174 = dyn abs1(r173);
    check L322() else D78();
  L319():
    dr54 = tryDispatchBuiltin.1("[", pusr13);
    dc27 = getTryDispatchBuiltinDispatched(dr54);
    if dc27 then L321() else L320(size22, dx82, dr54);
  L320(size24, dx84, pusr15):
    __14 = ldf `[` in base;
    r172 = dyn __14(pusr15, 3);
    goto L76(size24, dx84, r172);
  L329():
    i_multi1 = force? i_multi;
    checkMissing(i_multi1);
    number13 = ld number;
    check L330() else D81();
  L336():
    r187 = dyn numeric();
    check L337() else D85();
  D78():
    deopt 332 [size26, r174];
  D81():
    deopt 344 [number13];
  D85():
    deopt 356 [r187];
  L321():
    dx86 = getTryDispatchBuiltinValue(dr54);
    goto L76(size22, dx82, dx86);
  L322():
    goto L74(size26, r174);
  L330():
    number14 = force? number13;
    checkMissing(number14);
    c56 = `is.object`(number14);
    if c56 then L331() else L332(number14);
  L337():
    st z = r187;
    i_multi2 = ld `i.multi`;
    check L338() else D86();
  D86():
    deopt 358 [i_multi2];
  L79(dx92):
    rep_int = ldf `rep.int` in base;
    r186 = dyn rep_int(i_multi1, dx92);
    check L335() else D83();
  L331():
    dr58 = tryDispatchBuiltin.1("[", number14);
    dc29 = getTryDispatchBuiltinDispatched(dr58);
    if dc29 then L333() else L332(dr58);
  L332(number16):
    number17 = ld number;
    check L334() else D82();
  L338():
    i_multi3 = force? i_multi2;
    checkMissing(i_multi3);
    s = toForSeq(i_multi3);
    l = length(s);
    i = 0;
    goto L80(i);
  D82():
    deopt 346 [number16, number17];
  D83():
    deopt 352 [r186];
  L80(i1):
    i2 = `+`.1(i1, 1);
    c57 = `<`.1(l, i2);
    if c57 then L339() else L85();
  L333():
    dx91 = getTryDispatchBuiltinValue(dr58);
    goto L79(dx91);
  L334():
    number18 = force? number17;
    checkMissing(number18);
    r184 = `>`(number18, 1.0);
    __16 = ldf `[` in base;
    r185 = dyn __16(number16, r184);
    goto L79(r185);
  L335():
    goto L78(r186);
  L85():
    x26 = `[[`(s, i2, NULL, TRUE);
    st i = x26;
    sym26 = ldf c;
    base26 = ldf c in base;
    guard26 = `==`.4(sym26, base26);
    if guard26 then L340() else L341();
  L339():
    z2 = ld z;
    check L355() else D95();
  D95():
    deopt 390 [6.283185307179586, z2];
  L81(i7, r189):
    st z = r189;
    goto L80(i7);
  L340():
    z = ld z;
    check L342() else D87();
  L341():
    r188 = dyn base26(<sym z>, <lang `+`(`:`(1, `[`(number, i)), if(rotate, `::`(stats, runif)(1.0), 0.0))>);
    goto L81(i2, r188);
  L355():
    z3 = force? z2;
    checkMissing(z3);
    r205 = `*`(6.283185307179586, z3);
    number23 = ld number;
    check L356() else D96();
  D87():
    deopt 362 [i2, z];
  D96():
    deopt 392 [r205, number23];
  L342():
    z1 = force? z;
    checkMissing(z1);
    number19 = ld number;
    check L343() else D88();
  L356():
    number24 = force? number23;
    checkMissing(number24);
    c61 = `is.object`(number24);
    if c61 then L357() else L358(r205, number24);
  D88():
    deopt 365 [i2, 1, number19];
  L86(r209, dx96):
    r211 = `/`(r209, dx96);
    st deg = r211;
    segments = ldf segments;
    check L361() else D98();
  L343():
    number20 = force? number19;
    checkMissing(number20);
    c58 = `is.object`(number20);
    if c58 then L344() else L345(i2, 1, number20);
  L357():
    dr62 = tryDispatchBuiltin.1("[", number24);
    dc31 = getTryDispatchBuiltinDispatched(dr62);
    if dc31 then L359() else L358(r205, dr62);
  L358(r207, number26):
    i_rep = ld `i.rep`;
    check L360() else D97();
  D97():
    deopt 394 [r207, number26, i_rep];
  D98():
    deopt 400 [];
  L82(i11, r193, dx94):
    r195 = `:`(r193, dx94);
    rotate1 = ld rotate;
    check L348() else D90();
  L344():
    dr60 = tryDispatchBuiltin.1("[", number20);
    dc30 = getTryDispatchBuiltinDispatched(dr60);
    if dc30 then L346() else L345(i2, 1, dr60);
  L345(i9, r191, number22):
    i12 = ld i;
    check L347() else D89();
  L359():
    dx95 = getTryDispatchBuiltinValue(dr62);
    goto L86(r205, dx95);
  L360():
    i_rep1 = force? i_rep;
    __19 = ldf `[` in base;
    r210 = dyn __19(number26, i_rep1);
    goto L86(r207, r210);
  L361():
    p32 = prom<V +>{
      x27 = ld x;
      x28 = force? x27;
      checkMissing(x28);
      c62 = `is.object`(x28);
      if c62 then L1() else L2(x28);
    L0(dx98):
      return dx98;
    L1():
      dr64 = tryDispatchBuiltin.1("[", x28);
      dc32 = getTryDispatchBuiltinDispatched(dr64);
      if dc32 then L3() else L2(dr64);
    L2(x30):
      i_rep2 = ld `i.rep`;
      i_rep3 = force? i_rep2;
      __20 = ldf `[` in base;
      r212 = dyn __20(x30, i_rep3);
      goto L0(r212);
    L3():
      dx97 = getTryDispatchBuiltinValue(dr64);
      goto L0(dx97);
    };
    p33 = prom<V +>{
      y13 = ld y;
      y14 = force? y13;
      checkMissing(y14);
      c63 = `is.object`(y14);
      if c63 then L1() else L2(y14);
    L0(dx100):
      return dx100;
    L1():
      dr66 = tryDispatchBuiltin.1("[", y14);
      dc33 = getTryDispatchBuiltinDispatched(dr66);
      if dc33 then L3() else L2(dr66);
    L2(y16):
      i_rep4 = ld `i.rep`;
      i_rep5 = force? i_rep4;
      __21 = ldf `[` in base;
      r214 = dyn __21(y16, i_rep5);
      goto L0(r214);
    L3():
      dx99 = getTryDispatchBuiltinValue(dr66);
      goto L0(dx99);
    };
    p34 = prom<V +>{
      x31 = ld x;
      x32 = force? x31;
      checkMissing(x32);
      c64 = `is.object`(x32);
      if c64 then L2() else L3(x32);
    L0(dx102):
      xr = ld xr;
      xr1 = force? xr;
      checkMissing(xr1);
      sym27 = ldf sin;
      base27 = ldf sin in base;
      guard27 = `==`.4(sym27, base27);
      if guard27 then L5() else L6();
    L2():
      dr68 = tryDispatchBuiltin.1("[", x32);
      dc34 = getTryDispatchBuiltinDispatched(dr68);
      if dc34 then L4() else L3(dr68);
    L3(x34):
      i_rep6 = ld `i.rep`;
      i_rep7 = force? i_rep6;
      __22 = ldf `[` in base;
      r216 = dyn __22(x34, i_rep7);
      goto L0(r216);
    L1(dx105, xr4, r218):
      r220 = `*`(xr4, r218);
      r221 = `+`(dx105, r220);
      return r221;
    L4():
      dx101 = getTryDispatchBuiltinValue(dr68);
      goto L0(dx101);
    L5():
      deg = ld deg;
      deg1 = force? deg;
      checkMissing(deg1);
      r219 = sin(deg1);
      goto L1(dx102, xr1, r219);
    L6():
      r217 = dyn base27(<sym deg>);
      goto L1(dx102, xr1, r217);
    };
    p35 = prom<V +>{
      y17 = ld y;
      y18 = force? y17;
      checkMissing(y18);
      c65 = `is.object`(y18);
      if c65 then L2() else L3(y18);
    L0(dx107):
      yr = ld yr;
      yr1 = force? yr;
      checkMissing(yr1);
      sym28 = ldf cos;
      base28 = ldf cos in base;
      guard28 = `==`.4(sym28, base28);
      if guard28 then L5() else L6();
    L2():
      dr70 = tryDispatchBuiltin.1("[", y18);
      dc35 = getTryDispatchBuiltinDispatched(dr70);
      if dc35 then L4() else L3(dr70);
    L3(y20):
      i_rep8 = ld `i.rep`;
      i_rep9 = force? i_rep8;
      __23 = ldf `[` in base;
      r223 = dyn __23(y20, i_rep9);
      goto L0(r223);
    L1(dx110, yr4, r225):
      r227 = `*`(yr4, r225);
      r228 = `+`(dx110, r227);
      return r228;
    L4():
      dx106 = getTryDispatchBuiltinValue(dr70);
      goto L0(dx106);
    L5():
      deg2 = ld deg;
      deg3 = force? deg2;
      checkMissing(deg3);
      r226 = cos(deg3);
      goto L1(dx107, yr1, r226);
    L6():
      r224 = dyn base28(<sym deg>);
      goto L1(dx107, yr1, r224);
    };
    p36 = prom<V +>{
      seg_col1 = ld `seg.col`;
      seg_col2 = force? seg_col1;
      checkMissing(seg_col2);
      return seg_col2;
    };
    p37 = prom<V +>{
      seg_lwd1 = ld `seg.lwd`;
      seg_lwd2 = force? seg_lwd1;
      checkMissing(seg_lwd2);
      return seg_lwd2;
    };
    r232 = dyn segments[, , , , col, lwd](p32, p33, p34, p35, p36, p37);
    check L362() else D99();
  D89():
    deopt 367 [i9, r191, number22, i12];
  D90():
    deopt 370 [i11, r195, rotate1];
  D99():
    deopt 409 [r232];
  L346():
    dx93 = getTryDispatchBuiltinValue(dr60);
    goto L82(i2, 1, dx93);
  L347():
    i13 = force? i12;
    __17 = ldf `[` in base;
    r194 = dyn __17(number22, i13);
    goto L82(i9, r191, r194);
  L348():
    rotate2 = force? rotate1;
    checkMissing(rotate2);
    c59 = `as.logical`(rotate2);
    if c59 then L349() else L83();
  L362():
    goto L87();
  L83():
    goto L84(i11, r195, 0.0);
  L84(i16, r201, r202):
    r203 = `+`(r201, r202);
    c60 = ldf c in base;
    r204 = dyn c60(z1, r203);
    check L354() else D94();
  L349():
    __18 = ldf `::`;
    check L350() else D91();
  D91():
    deopt 373 [i11, r195];
  D94():
    deopt 384 [i16, r204];
  L350():
    r198 = dyn __18("stats", "runif");
    check L351() else D92();
  L354():
    goto L81(i16, r204);
  D92():
    deopt 376 [i11, r195, r198];
  L351():
    checkFun.0(r198);
    r199 = r198 as cls;
    r200 = dyn r199(1.0);
    check L352() else D93();
  D93():
    deopt 379 [i11, r195, r200];
  L352():
    goto L84(i11, r195, r200);
  }
}