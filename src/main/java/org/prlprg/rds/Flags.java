package org.prlprg.rds;

final class Flags {
    private static final int UTF8_MASK = 1 << 3;
    private static final int ATTR_MASK = 1 << 9;
    private static final int TAG_MASK = 1 << 10;

    private final int flags;

    public Flags(int flags) {
        this.flags = flags;
        try {
            this.getType();
        } catch (IllegalArgumentException e) {
            throw new IllegalArgumentException("Invalid flags", e);
        }
    }

    public Flags(RDSItemType type, int levels, boolean isUTF8, boolean hasAttributes, boolean hasTag, int refIndex) {
        this.flags = type.i() | (levels << 12) | (isUTF8 ? UTF8_MASK : 0) | (hasAttributes ? ATTR_MASK : 0)
                | (hasTag ? TAG_MASK : 0) | (refIndex << 8);
    }

    public RDSItemType getType() {
        return RDSItemType.valueOf(flags & 255);
    }

    public int decodeLevels() {
        return flags >> 12;
    }

    public boolean isUTF8() {
        return (decodeLevels() & UTF8_MASK) != 0;
    }

    public boolean hasAttributes() {
        return (flags & ATTR_MASK) != 0;
    }

    public boolean hasTag() {
        return (flags & TAG_MASK) != 0;
    }

    public int unpackRefIndex() {
        return flags >> 8;
    }

    @Override
    public String toString() {
        return "Flags{" + "type=" + getType() + ", levels=" + decodeLevels() + ", isUTF8=" + isUTF8()
                + ", hasAttributes=" + hasAttributes() + ", hasTag=" + hasTag() + ", refIndex=" + unpackRefIndex()
                + '}';
    }
}
