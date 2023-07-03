class garbage
{
    public static void main(String[] args)
    {
        garbage g = new garbage();
        System.out.println("free memmory before = "+Runtime.getRuntime().freeMemory());
        g=null;
        System.gc();
        System.out.println("free memmory after = "+Runtime.getRuntime().freeMemory());
        
    }
}
