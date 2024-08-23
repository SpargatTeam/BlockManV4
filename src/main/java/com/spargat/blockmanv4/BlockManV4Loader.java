package com.spargat.blockmanv4;

public class BlockManV4Loader {
    // Flag care indică dacă biblioteca a fost încărcată
    private static boolean isLibraryLoaded;

    // Bloc static pentru încărcarea bibliotecii
    static {
        try {
            System.loadLibrary("BlockManV4");
            isLibraryLoaded = true;
        } catch (UnsatisfiedLinkError e) {
            // Logare sau tratare a erorii în cazul în care biblioteca nu se încarcă
            System.err.println("Failed to load BlockManV4 library: " + e.getMessage());
            isLibraryLoaded = false;
        }
    }

    // Metodă publică pentru a verifica dacă biblioteca este încărcată
    public static boolean isLibraryLoaded() {
        return isLibraryLoaded;
    }
}
